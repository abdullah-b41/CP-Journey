#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int d = floor(n / 2) + 1 - k;
    if (d > 0)
        cout << d << '\n';
    else
        cout << "0\n";
}

int main()
{
    fast;

    int t = 1;

    while (t--)
        solve();

    return 0;
}