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
    if (n == k)
    {
        for (int i = 0; i < n; i++)
        {
            cout << 1 << ' ';
        }
        cout << '\n';
        return;
    }
    else if (k == 1)
    {
        cout << n << ' ';
        for (int i = 1; i < n; i++)
        {
            cout << i << ' ';
        }
        cout << '\n';
        return;
    }
    else if (k > 1)
        cout << "-1\n";
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