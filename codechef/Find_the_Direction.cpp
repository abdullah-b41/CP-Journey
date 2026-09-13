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
    n %= 4;
    if (n == 0)
        cout << "North\n";
    else if (n == 1)
        cout << "East\n";
    else if (n == 2)
        cout << "South\n";
    else
        cout << "West\n";
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