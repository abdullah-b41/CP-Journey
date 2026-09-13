#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int time, dist = 0;
    cin >> time;
    if (time % 2 == 0)
        dist = time;
    else
        dist = time + 2;
    cout << dist << '\n';
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