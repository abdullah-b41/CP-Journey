#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long ans = 0;
    int x;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
        ans += x;
    }
    cout << -ans <<'\n';
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