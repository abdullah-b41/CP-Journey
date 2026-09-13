#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    for (int i = 1, j = 3, k = 2; i <= 100; i++)
    {
        if (a * j > b * k)
        {
            cout << i << '\n';
            return;
        }
        j *= 3, k *= 2;
    }
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