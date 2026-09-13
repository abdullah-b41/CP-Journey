#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    k = 240 - k;
    int ans = 0;
    for (int i = 1; i <= k; i++)
    {
        if (k - i * 5 >= 0)
            ans++;
        k -= i * 5;
    }
    cout << min(ans, n) << '\n';
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