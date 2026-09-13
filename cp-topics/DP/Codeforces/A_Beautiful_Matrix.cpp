#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a[5][6] = {0};
    int x, y;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j])
                x = i + 1, y = j + 1;
        }
    cout << abs(3 - x) + abs(3 - y) << '\n';
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