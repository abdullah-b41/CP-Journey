#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        pq.push(x);
    }
    long long cost = 0;
    while (pq.size() > 1)
    {
        long long a = pq.top();
        pq.pop();
        long long b = pq.top();
        pq.pop();
        cost += a + b;
        pq.push(a + b);
    }
    cout << cost << '\n';
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