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
    for (int i = 0; i < n; i++)
    {
        if (i <= k)
            cout << n - k + i << ' ';
        else
            cout << n - i << ' ';
    }
    cout << '\n';
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