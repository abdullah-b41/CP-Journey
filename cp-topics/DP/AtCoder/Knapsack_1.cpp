#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> wgt, val;
long long dp[101][100001];

long long knapsack(int pos, int left)
{
    if (pos == n)
        return 0;
    if (dp[pos][left] != -1)
        return dp[pos][left];

    long long ans = knapsack(pos + 1, left);
    if (wgt[pos] <= left)
        ans = max(ans, val[pos] + knapsack(pos + 1, left - wgt[pos]));

    return dp[pos][left] = ans;
}

void solve()
{
    int w;
    cin >> n >> w;

    memset(dp, -1, sizeof(dp));

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        wgt.push_back(x), val.push_back(y);
    }

    cout << knapsack(0, w) << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}