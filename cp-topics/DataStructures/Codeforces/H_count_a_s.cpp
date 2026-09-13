#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<int> pref(s.length() + 1, 0);
    for (int i = 0; i < s.length(); i++)
    {
        pref[i + 1] = pref[i];
        if (s[i] == 'a')
            pref[i + 1]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << '\n';
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