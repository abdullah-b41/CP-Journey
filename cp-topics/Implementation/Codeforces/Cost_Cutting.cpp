#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    long long sum = a + b + c;
    cout << sum - min({a, b, c}) - max({a, b, c}) << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        solve();
    }

    return 0;
}