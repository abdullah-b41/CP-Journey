#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    int k = 0;
    vector<pair<int, int>> ans;
    for (int i = 0; i < n;)
    {
        if (v[i] != i + 1)
        {
            k++;
            ans.push_back({i, v[i] - 1});
            swap(v[i], v[v[i] - 1]);
        }
        else
            i++;
    }

    cout << k << '\n';
    for (auto [x, y] : ans)
        cout << x + 1 << " " << y + 1 << '\n';
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