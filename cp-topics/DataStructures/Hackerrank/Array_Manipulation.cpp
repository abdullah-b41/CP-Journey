#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<long long> pref(n + 1);
    while (q--)
    {
        int l, r, x;
        cin >> l >> r >> x;
        pref[l - 1] += x;
        pref[r] -= x;
    }

    for (int i = 1; i <= n; i++)
        pref[i] += pref[i - 1];

    cout << *max_element(pref.begin(), pref.end()) << '\n';
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