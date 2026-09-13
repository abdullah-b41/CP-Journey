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
                isp[j] = true;

    primes.push_back(2);
    for (int i = 3; i <= N; i += 2)
        if (!isp[i])
            primes.push_back(i);
}

void solve()
{
    int n = primes.size();
    for (int i = 0; i < n; i += 100)
        cout << primes[i] << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    sieve();
    while (t--)
    {
        solve();
    }

    return 0;
}