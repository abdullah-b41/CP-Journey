#include <bits/stdc++.h>
using namespace std;

const int N = 10000000;
vector<bool> isp(N + 1, false);
vector<int> primes;
vector<int> spf(N + 1);
vector<pair<int, int>> ans;

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
    int n;
    cin >> n;
    cout << ans[n - 1].first << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    sieve();

    ans.push_back({1, 1});
    for (int i = 2; i <= 1000; i++)
    {
        int num = i;
        int total = 1;
        while (num > 1)
        {
            int p = spf[num];
            int cnt = 0;
            while (num % p == 0)
            {
                cnt++;
                num /= p;
            }
            total *= (cnt + 1);
        }
        ans.push_back({i, total});
    }

    sort(ans.begin(), ans.end(), [](auto &x, auto &y)
         {
        if(x.second==y.second)return x.first>y.first;
    return  x.second < y.second; });

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        solve();
    }

    return 0;
}