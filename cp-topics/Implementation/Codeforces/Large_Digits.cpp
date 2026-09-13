#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    int sum_a = 0, sum_b = 0;
    for (int i = 0; i < 3; i++)
    {
        sum_a += a % 10;
        sum_b += b % 10;
        a /= 10;
        b /= 10;
    }
    cout << (sum_a >= sum_b ? sum_a : sum_b) << '\n';
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