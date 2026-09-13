#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<pair<int, int>> v(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    int area = abs(v[0].second - v[1].second) * abs(v[2].second - v[3].second);
    cout << area << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
