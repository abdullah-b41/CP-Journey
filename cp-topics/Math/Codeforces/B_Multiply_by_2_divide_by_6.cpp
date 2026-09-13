#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    int ans = 0;
    while (1)
    {
        if (n == 1)
            break;

        if (n % 6 == 0)
        {
            n /= 6;
            ans++;
        }
        else if ((n * 2) % 6 == 0)
        {
            n *= 2;
            ans++;
        }
        else if ((n % 6 != 0) && ((n * 2) % 6 != 0))
        {
            cout << -1 << '\n';
            return;
        }
    }
    cout << ans << '\n';
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