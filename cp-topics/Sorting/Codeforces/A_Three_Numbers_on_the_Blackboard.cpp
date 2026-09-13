#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, c;
    cin >> a >> b >> c;
    long long mx = max(a, max(b, c));
    long long mn = min(a, min(b, c));
    long long del = mx - mn;
    if (mx == a)
        mx = b + c;
    else if (mx == b)
        mx = a + c;
    else
        mx = a + b;
    long long del2 = mx - mn;
    cout << min(del, del2) << '\n';
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