#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;

    ll mx = ((n * (n + 1)) - (n - k) * (n - k + 1)) / 2;
    ll mn = (k * (k + 1)) / 2;

    if (x >= mn && x <= mx)
        cout << "YES\n";
    else
        cout << "NO\n";
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