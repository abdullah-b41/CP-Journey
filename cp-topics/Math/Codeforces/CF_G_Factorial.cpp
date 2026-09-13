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
    ll ans = 1;
    while (n > 0)
    {
        ans *= n;
        n--;
    }
    cout << ans << '\n';
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