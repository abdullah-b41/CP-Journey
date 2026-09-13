#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        double x;
        cin >> x;
        ans += x;
    }
    cout << fixed << setprecision(12) << ans / n << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}