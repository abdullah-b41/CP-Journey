#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a == 0 || b == 0 || c == 0) && (a == 1 || b == 1 || c == 1))
        cout << "1\n";
    else
        cout << "0\n";
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