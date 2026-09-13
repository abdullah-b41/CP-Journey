#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    ll digits = to_string(n).size();
    ll d = 1;
    for (int i = 0; i < digits; i++)
        d *= 10;
    d /= 10;
    cout << n - d << '\n';
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