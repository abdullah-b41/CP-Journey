#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int dis = 100000;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        dis = min(dis, abs(0 - v[i]));
    }
    cout << dis << '\n';
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
