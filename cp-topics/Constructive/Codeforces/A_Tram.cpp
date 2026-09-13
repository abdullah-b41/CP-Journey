#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int cur = 0, mx = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        cur += b - a;
        mx = max(cur, mx);
    }
    cout << mx << '\n';
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