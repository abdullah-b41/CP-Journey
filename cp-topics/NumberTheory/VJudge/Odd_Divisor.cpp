#include <bits/stdc++.h>
using namespace std;

#define N 10000001
vector<bool> isp(N);
vector<int> primes;

void solve()
{
    long long n;
    cin >> n;

    if (n > 1 && n % 2 == 1)
    {
        cout << "YES\n";
        return;
    }
    for (auto &i : primes)
    {
        if (i * i > n)
            break;
        if (n % i == 0)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    for (int i = 4; i < N; i += 2)
        isp[i] = true;
    for (int i = 3; i * i < N; i += 2)
    {
        if (!isp[i])
        {
            for (int j = i * i; j < N; j += 2 * i)
            {
                isp[j] = true;
            }
        }
    }

    // primes.push_back(2);
    for (int i = 3; i < N; i += 2)
        if (!isp[i])
            primes.push_back(i);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}