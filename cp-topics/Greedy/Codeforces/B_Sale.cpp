#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    int sum = 0;
    for (auto &it : v)
        cin >> it;
    sort(v.begin(), v.end());
    for (int i = 0; i < m; i++)
    {
        sum = max(sum, sum - v[i]);
    }

    cout << sum << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
