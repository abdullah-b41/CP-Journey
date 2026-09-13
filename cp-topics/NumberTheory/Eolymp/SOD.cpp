#include <bits/stdc++.h>
using namespace std;

const int N = 10000000;
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

long long SOD(int n)
{
    long long sod = 1;
    for (int p : primes)
    {
        if (1LL * p * p > n)
            break;
        if (n % p)
            continue;
        long long tmpSum = 1, pw = 1;
        while (n % p == 0)
        {
            pw *= p;
            tmpSum += pw;
            n /= p;
        }
        sod *= tmpSum;
    }
    if (n > 1)
        sod *= (n + 1);
    return sod;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    return 0;
}
