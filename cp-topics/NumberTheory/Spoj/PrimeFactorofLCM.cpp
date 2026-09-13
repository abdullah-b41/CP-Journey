#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;
vector<bool> isp(N + 1, false);
vector<int> primes;

void sieve()
{
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

void solve(int i)
{
    long long n;
    cin >> n;
    set<long long> ans;
    while (n--)
    {
        long long x;
        cin >> x;
        for (auto &i : primes)
        {
            if (1LL * i * i > x)
                break;
            if (x % i == 0)
            {
                while (x % i == 0)
                    x /= i;
                ans.insert(i);
            }
        }
        if (x > 1)
            ans.insert(x);
    }

    cout << "Case #" << i << ": " << ans.size() << '\n';
    for (auto p : ans)
        cout << p << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);

    return 0;
}