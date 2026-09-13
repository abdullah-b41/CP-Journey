#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> pref(n + 1);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        pref[x]++;
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