#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    int ans = 0, hire = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != -1)
            hire += v[i];
        else
        {
            if (hire <= 0)
                ans++;
            else
            {
                hire--;
            }
        }
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}
//