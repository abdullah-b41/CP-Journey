#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    unordered_map<int, int> mp;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }

    if (mp.size() == 1)
        cout << "Yes\n";
    else if (mp.size() == 2)
    {
        for (auto [x, y] : mp)
        {
            if (!(n & 1) && y > n / 2)
            {
                cout << "No\n";
                return;
            }
            else if ((n & 1) && y > (n / 2 + 1))
            {
                cout << "No\n";
                return;
            }
        }
        cout << "Yes\n";
    }
    else
        cout << "No\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}