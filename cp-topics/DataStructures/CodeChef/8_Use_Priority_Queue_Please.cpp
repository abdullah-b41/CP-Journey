#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    priority_queue<int> pq;
    while (n--)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    while (pq.size())
    {
        cout << pq.top() << " ";
        if (pq.top() / 2 != 0)
        {
            pq.push(pq.top() / 2);
        }
        pq.pop();
    }
    cout << '\n';
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