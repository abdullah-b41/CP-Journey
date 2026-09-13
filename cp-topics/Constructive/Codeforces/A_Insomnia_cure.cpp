#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    set<int> ans;
    int i = k;
    while (i <= d)
    {
        ans.insert(i);
        i += k;
    }

    i = l;
    while (i <= d)
    {
        ans.insert(i);
        i += l;
    }

    i = m;
    while (i <= d)
    {
        ans.insert(i);
        i += m;
    }

    i = n;
    while (i <= d)
    {
        ans.insert(i);
        i += n;
    }
    cout << ans.size() << '\n';
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