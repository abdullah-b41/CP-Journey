#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ans = n / 100 + (n % 100) / 20 + ((n % 100) % 20) / 10 + (((n % 100) % 20) % 10) / 5 + (((n % 100) % 20) % 10) % 5;
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