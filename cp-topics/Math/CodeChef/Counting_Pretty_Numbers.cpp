#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int l, r;
    cin >> l >> r;
    int cnt = 0;
    for (int i = l; i <= r; i++)
        if (i % 10 == 2 || i % 10 == 3 || i % 10 == 9)
            cnt++;
    cout << cnt << '\n';
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