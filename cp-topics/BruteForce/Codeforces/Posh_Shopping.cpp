#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    int ans = 0;
    for (int i = 0; i + 1 < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] >= v[i])
                ans = max(ans, v[i] + v[j]);
        }
    }

    for (int i = 0; i < n; i++)
        ans = max(ans, v[i]);
        
    cout << ans << "\n";
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