#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int d1 = n - (n / 5) * 5, d2 = ((n / 5) + 1) * 5 - n;
    cout << (d1 < d2 ? (n / 5) * 5 : ((n / 5) + 1) * 5) << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}
