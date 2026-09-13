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

int NOD(long long n)
{
    int nod = 1;
    for (auto p : primes)
    {
        if (1LL * p * p > n)
            break;
        if (n % p)
            continue;
        int divs = 0;
        while (n % p == 0)
        {
            divs++;
            n /= p;
        }
        nod *= (divs + 1);
    }
    if (n > 1)
        nod *= 2;
    return nod;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    return 0;
}



