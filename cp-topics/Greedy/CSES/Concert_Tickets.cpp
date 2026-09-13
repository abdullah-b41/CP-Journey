#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int m, n;
    cin >> m >> n;
    vector<int> ticket(m), man(n);
    for (auto &i : ticket)
        cin >> i;
    for (auto &i : man)
        cin >> i;

    sort(ticket.begin(), ticket.end());

    for (int i = 0; i < n; i++)
    {
        auto x = lower_bound(ticket.begin(), ticket.end(), man[i]);

        if (x == ticket.end())
        {
            --x;
            cout << *x << '\n';
            ticket.erase(x);
        }
        else if (*x == man[i])
        {
            cout << *x << '\n';
            ticket.erase(x);
        }
        else if (x != ticket.begin())
        {
            --x;
            cout << *x << '\n';
            ticket.erase(x);
        }
        else
        {
            cout << -1 << '\n';
        }
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