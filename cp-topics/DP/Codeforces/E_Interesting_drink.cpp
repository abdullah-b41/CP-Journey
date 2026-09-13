#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        cout << upper_bound(v.begin(), v.end(), x) - v.begin() << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}