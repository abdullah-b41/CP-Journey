#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    while (k--)
    {
        int x;
        cin >> x;
        auto it = upper_bound(v.begin(), v.end(), x);
        int idx = it - v.begin();
        cout << idx << '\n';
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