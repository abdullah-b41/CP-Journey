#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int sml_prime_divisor = n;

    for (int k = 2; k * k <= n; k++)
    {
        if (n % k == 0)
        {
            sml_prime_divisor = k;
            break;
        }
    }

    int ans = n / sml_prime_divisor;
    cout << ans << ' ' << n - ans << '\n';
}

int main()
{
    fast;

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}