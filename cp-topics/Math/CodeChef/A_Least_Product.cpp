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
    int x, neg = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        neg += x < 0;
        z += x == 0;
    }
    if (neg % 2 == 1 || z > 0)
    {
        cout << "0\n";
    }
    else
    {
        cout << "1\n";
        cout << "1 0\n";
    }
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