#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k, n, w;
    cin >> k >> n >> w;
    int cost = 0;
    for (int i = 1; i <= w; i++)
        cost += i * k;
    cout << max(0, cost - n) << '\n';
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