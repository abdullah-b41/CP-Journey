#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int d, x, y, z;
    cin >> d >> x >> y >> z;
    int a = 7 * x, b = y * d + z * (7 - d);
    cout << (a > b ? a : b) << '\n';
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