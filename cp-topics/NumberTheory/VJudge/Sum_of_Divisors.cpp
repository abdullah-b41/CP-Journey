#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007LL

void solve()
{
    long long n;
    cin >> n;
    long long ans = 0;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans += i;
            if (i != n / i)
                ans += n / i;
        }
    }
    cout << ans % MOD << '\n';
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