#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (auto &it : v)
        cin >> it;
    sort(v.begin(), v.end());

    int diff = 1000;
    for (int i = 0; i + n <= m; i++)
    {
        diff = min(diff, v[i + n - 1] - v[i]);
    }
    cout << diff << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;

    while (t--)
    {
        solve();
    }

    return 0;
}
