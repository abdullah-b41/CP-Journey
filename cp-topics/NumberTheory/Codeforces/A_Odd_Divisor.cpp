#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;

    ll lg = log2(n);
    if (pow(2, lg) == n)
    {
        cout << "NO\n";
    }
    else
        cout << "YES\n";
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