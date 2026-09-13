#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    string s;
    cin >> s;

    map<char, int> mp;
    for (auto i : s)
        mp[i]++;

    if (mp['A'] && mp['B'] && mp['C'])
        cout << "Yes\n";
    else
        cout << "No\n";
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