#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, h;
    cin >> n >> h;
    vector<int> v(n);
    int cnt = 0;
    for (auto &i : v)
    {
        cin >> i;
        cnt++;
        if (i > h)
            cnt++;
    }
    cout << cnt << '\n';
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