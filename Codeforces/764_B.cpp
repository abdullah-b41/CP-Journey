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
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;

    for (int j = 0; j < n / 2; j += 2)
    {
        swap(v[j], v[n - 1 - j]);
    }

    for (auto i : v)
        cout << i << ' ';
    cout << '\n';
}

int main()
{
    fast;

    int t = 1;
    while (t--)
        solve();

    return 0;
}