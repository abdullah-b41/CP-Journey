#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        int ans = v[a - 1];
        for (int i = a; i < b; i++)
        {
            ans = min(ans, v[i]);
        }
        cout << ans << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ":\n";
        solve();
    }

    return 0;
}