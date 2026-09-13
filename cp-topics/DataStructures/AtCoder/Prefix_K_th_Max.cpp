#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    for (int i = 0; i < k; i++)
        pq.push(v[i]);

    cout << pq.top() << '\n';
    for (int i = k; i < n; i++)
    {
        if (v[i] > pq.top())
            pq.pop(), pq.push(v[i]);
        cout << pq.top() << '\n';
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