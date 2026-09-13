#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int x;
    long long sum = 0;
    while (n--)
    {
        cin >> x;
        sum += x;
    }
    cout << (sum & 1 ? "NO\n" : "YES\n");
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}