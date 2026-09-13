#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    int iter = 0;
    while (pq.top() < k)
    {
        int x = pq.top();
        pq.pop();
        if (pq.empty())
        {
            cout << "-1\n";
            return;
        }
        int y = pq.top();
        pq.pop();
        pq.push(x + 2 * y);
        iter++;
    }
    cout << iter << '\n';
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