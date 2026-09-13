#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;

    int sum = 0;
    while (n)
    {
        sum += n / 2;
        n /= 2;
    }

    if (sum >= k)
        cout << "YES\n";
    else
        cout << "NO\n";
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