#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int sum_b = abs(b - c) + c;
    if (a < sum_b)
        cout << 1;
    else if (sum_b < a)
        cout << 2;
    else
        cout << 3;
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