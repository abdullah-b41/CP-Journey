#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> v(4);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            v[1].push_back(i + 1);
        else if (x == 2)
            v[2].push_back(i + 1);
        else
            v[3].push_back(i + 1);
    }

    int ans = min({v[1].size(), v[2].size(), v[3].size()});
    cout << ans << '\n';
    int idx = 0;
    while (ans--)
    {
        for (int i = 1; i <= 3; i++)
        {
            cout << v[i][idx] << " ";
        }
        cout << '\n';
        idx++;
    }
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