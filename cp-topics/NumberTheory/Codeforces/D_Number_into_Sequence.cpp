#include <bits/stdc++.h>
using namespace std;

const int N = 100000;
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
    long long n;
    cin >> n;
    vector<pair<long long, int>> v;
    for (auto i : primes)
    {
        if (1LL * i * i > n)
            break;
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            v.push_back({i, cnt});
        }
    }
    if (n > 1)
        v.push_back({n, 1});

    sort(v.begin(), v.end(), [](auto &x, auto &y)
         { return x.second > y.second; });

    vector<long long> ans(v[0].second, v[0].first);
    for (int i = 1; i < v.size(); i++)
    {
        while (v[i].second--)
        {
            ans.back() *= v[i].first;
        }
    }

    cout << ans.size() << '\n';
    for (auto i : ans)
        cout << i << ' ';
    cout << '\n';
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