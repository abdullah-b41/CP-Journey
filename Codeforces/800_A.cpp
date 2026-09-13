#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    string s;
    cin >> s;
    if (s[0] == 'a')
    {
        cout << "YES\n";
        return;
    }
    if (s[1] == 'b')
    {
        cout << "YES\n";
        return;
    }
    if (s[2] == 'c')
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
}

int main()
{
    fast;

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}