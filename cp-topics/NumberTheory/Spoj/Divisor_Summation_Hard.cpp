#include <bits/stdc++.h>
using namespace std;

const int N = 100000000;
vector<bool> isp(N + 1, false);
vector<int> primes;

void sieve()
{
    isp[0] = isp[1] = true;
    for (int i = 4; i <= N; i += 2)
        isp[i] = true;

    for (int i = 3; 1LL * i * i <= N; i += 2)
        if (!isp[i])
            for (int j = i * i; j <= N; j += 2 * i)
                if (!isp[j])
                    isp[j] = true;

    primes.push_back(2);
    for (int i = 3; i <= N; i += 2)
        if (!isp[i])
            primes.push_back(i);
}

vector<pair<long long, int>> PrimeFact(long long n)
{
    vector<pair<long long, int>> pf;
    for (int p : primes)
    {
        if (1LL * p * p > n)
            break;
        if (n % p == 0)
        {
            int cnt = 0;
            while (n % p == 0)
            {
                cnt++;
                n /= p;
            }
            pf.push_back({p, cnt});
        }
    }
    if (n > 1)
        pf.push_back({n, 1});
    return pf;
}

void solve()
{
    long long n;
    cin >> n;
    vector<pair<long long, int>> fact = PrimeFact(n);
    long long ans = 1;
    for (auto i : fact)
    {
        long long term = 1;
        long long cur = 1;
        for (int j = 0; j < i.second; j++)
        {
            cur *= i.first;
            term += cur;
        }
        ans *= term;
    } 
    cout << ans - n << '\n';
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