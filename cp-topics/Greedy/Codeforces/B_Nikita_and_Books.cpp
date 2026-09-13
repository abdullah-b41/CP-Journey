#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    vector<long long> v(n);
    for (auto &i : v)
        cin >> i;

    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }

    if (sum < (n) * (n + 1) / 2)
    {
        cout << "NO\n";
        return;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}