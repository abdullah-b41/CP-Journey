#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    map<int, int> ans;
    for (int i = 0; i < n; i++)
        ans[v[i]] = i + 1;
    for (auto [x, y] : ans)
        cout << y << " ";
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