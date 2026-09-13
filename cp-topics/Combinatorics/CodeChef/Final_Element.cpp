#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n - 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        b[i] = a[i] ^ a[i + 1];
    }

    while (b.size() > 1)
    {
        for (int i = 0; i + 1 < b.size(); i++)
        {
            vector<ll> c = b;
            b[i] = c[i] ^ c[i + 1];
        }
        b.pop_back();
    }

    cout << b[0] << '\n';
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