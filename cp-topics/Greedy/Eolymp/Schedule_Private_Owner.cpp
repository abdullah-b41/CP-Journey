#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        pq.push({x, y});
    }

    int x = pq.top().first, y = pq.top().second;
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (pq.empty())
            break;
        if (i < x)
        {
            sum += pq.top().second;
            pq.pop();
            if (!pq.empty())
                x = pq.top().first;
        }
        else
        {
            if (!pq.empty())
            {
                x = pq.top().first;
                y = pq.top().second;
            }
            while (!pq.empty() && pq.top().first == x)
            {
                y = pq.top().second;
                pq.pop();
            }
            sum += y;
        }
    }
    cout << sum << '\n';
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