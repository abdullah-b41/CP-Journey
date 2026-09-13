#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int solve = 0;
    while (n--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x + y + z > 1)
            solve++;
    }
    cout << solve << '\n';
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