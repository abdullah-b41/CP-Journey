#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    cout << (y > (x + z) ? 0 : (x + z) - y + 1) << '\n';
}

int main()
{
    fast;

    int t = 1;
    while (t--)
        solve();

    return 0;
}