#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;

    map<char, int> mp;
    string s;
    cin >> s;
    for (auto i : s)
        mp[i]++;

    int odds = 0;
    for (auto i : mp)
    {
        if (i.second & 1)
            odds++;
    }

    if (odds > k + 1)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}