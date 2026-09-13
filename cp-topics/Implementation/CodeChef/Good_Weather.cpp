#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int a[7] = {}, f_a[2] = {};
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
        f_a[a[i]]++;
    }
    if (f_a[0] >= f_a[1])
        cout << "NO\n";
    else
        cout << "YES\n";
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