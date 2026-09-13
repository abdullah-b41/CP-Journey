#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if ((n / 2) & 1)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    long long sum = n / 2 * (n / 2 + 1);
    for (int i = 0, k = 2; i < n / 2; i++, k += 2)
        cout << k << " ";
    for (int i = 0, k = 1; i < n / 2 - 1; i++, k += 2)
        cout << k << " ";
    cout << sum - (n / 2 - 1) * (n / 2 - 1);
    cout << '\n';
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