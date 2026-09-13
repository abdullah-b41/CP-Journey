#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (auto &i : v)
        cin >> i;

    map<string, int> cnt;
    for (int i = 0; i < n; i++)
    {
        string tmp = "";
        for (int j = 0; j < v[i].size(); j++)
        {
            tmp += tolower(v[i][j]);
        }
        cnt[tmp]++;
    }

    int best = 0;
    for (auto [x, y] : cnt)
        best = max(best, y);
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