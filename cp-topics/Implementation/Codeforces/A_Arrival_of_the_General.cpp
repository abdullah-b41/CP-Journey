#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    deque<int> dq(n);
    for (auto &i : dq)
        cin >> i;

    long long ans = 0;
    int mxIndex = max_element(dq.begin(), dq.end()) - dq.begin();
    int mx = *max_element(dq.begin(), dq.end());
    dq.erase(mxIndex + dq.begin());
    dq.push_front(mx);
    ans += mxIndex + min_element(dq.rbegin(), dq.rend()) - dq.rbegin();
    cout << ans << '\n';
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