#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> v(3);
    int sum = 0;
    for (auto &i : v)
    {
        cin >> i;
        sum += i;
    }

    for (auto i : v)
    {
        int tmp = sum;
        if (tmp - i >= 10)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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