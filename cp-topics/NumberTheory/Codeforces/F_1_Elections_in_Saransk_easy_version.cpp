#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
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
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    map<int, int> mp;
    for (auto &i : v)
    {
        cin >> i;
        int x = i;
        while (x > 1)
        {
            mp[spf[x]]++;
            x /= spf[x];
        }
    }
    long long ans = 1;
    for (auto [x, y] : mp)
    {
        ans = ans * (y + 1) % MOD;
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    sieve();

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}