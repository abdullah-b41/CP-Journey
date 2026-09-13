#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int x;
    cin >> x;
    int cost = 0;
    cost = x < 20 ? x * 10 : 20 * 10;
    x = (x - 20) / 2;
    cost += x > 0 ? x * 5 : 0;
    cout << cost << '\n';
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