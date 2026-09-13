#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, p;
    cin >> n >> m >> p;
    int days = 0, i = 0;
    while (n >= (m + p * i))
    {
        days++;
        i++;
    }
    cout << days << '\n';
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
