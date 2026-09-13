#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    cout << (m == 0 ? 1 : min(n - m, m)) << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;

    while (t--)
    {
        solve();
    }

    return 0;
}
