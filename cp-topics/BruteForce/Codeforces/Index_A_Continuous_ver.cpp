#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    long long best = 0;
    for (int i = 0; i + m <= n; i++)
    {
        long long sum = 0;
        for (int k = 1; k <= m; k++)
        {
            sum += k * v[i + k - 1];
        }
        best = max(best, sum);
    }
    cout << best << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}