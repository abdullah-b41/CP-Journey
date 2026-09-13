#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    map<int, int> ticket;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ticket[x]++;
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        int ans = -1;
        cin >> x;
        for (int i = x; i > 0; i--)
        {
            if (ticket[i] > 0)
            {
                ans = i;
                ticket[i]--;
                break;
            }
        }
        cout << ans << '\n';
    }
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
