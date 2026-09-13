#include <bits/stdc++.h>
using namespace std;

const int N = 10000000;
vector<bool> isp(N + 1, false);
vector<int> primes;
vector<int> spf(N + 1);

void sieve()
{
    iota(spf.begin(), spf.end(), 0);

    isp[0] = isp[1] = true;

    for (int i = 4; i <= N; i += 2)
        isp[i] = true, spf[i] = 2;

    for (int i = 3; 1LL * i * i <= N; i += 2)
        if (!isp[i])
            for (int j = i * i; j <= N; j += 2 * i)
                if (!isp[j])
                    isp[j] = true, spf[j] = i;

    primes.push_back(2);
    for (int i = 3; i <= N; i += 2)
        if (!isp[i])
            primes.push_back(i);
}

void solve()
{
    int a, b;
    cin >> a >> b;
    long long gc = __gcd(a, b);
    int ans = 1;
    while (gc > 1)
    {
        int exp = 0, curr = spf[gc];
        while (gc % curr == 0)
        {
            exp++;
            gc /= curr;
        }
        ans *= exp + 1;
        curr = spf[gc];
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    sieve();
    while (t--)
    {
        solve();
    }

    return 0;
}