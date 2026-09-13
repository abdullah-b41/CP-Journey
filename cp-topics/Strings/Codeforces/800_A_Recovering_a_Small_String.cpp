#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int x;
    string s;
    cin >> x;
    for (int i = 0; i < 3; i++)
    {
        char c = 'a' - 1 + x % 26;
        s.push_back(c);
        x -= x % 26;
    }
    cout << s << endl;
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