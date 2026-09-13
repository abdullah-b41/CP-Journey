#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    sort(v.begin(), v.end());
    int best = 1;
    int cnt = 1;
    for (int j = 0; j + 1 < n; j++)
    {
        if (v[j + 1] - v[j] <= k)
        {
            cnt++;
            best = max(cnt, best);
        }
        else
            cnt = 1;
    }

    cout << n - best << '\n';
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