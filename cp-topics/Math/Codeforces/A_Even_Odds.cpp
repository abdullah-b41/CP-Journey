#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;

    if (k > (n + 1) / 2)
    {
        k -= (n + 1) / 2;
        cout << 2 * k << '\n';
    }
    else
        cout << 2 * k - 1 << '\n';
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