#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;
vector<bool> isp(N + 1, false);
vector<int> primes;

void sieve()
{
    for (int i = 4; i <= N; i += 2)
        isp[i] = true;

    for (int i = 3; i * i <= N; i += 2)
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
    long long n;
    cin >> n;
    int divs = 1;
    for (auto &i : primes)
    {
        if (i * i > n)
            break;
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            divs *= cnt + 1;
        }
    }
    if (n > 1)
        divs *= 2;
    cout << divs << '\n';
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
