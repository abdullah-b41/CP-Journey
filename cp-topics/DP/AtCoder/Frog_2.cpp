#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int dp[100001];
vector<int> inp;
int n, up;

int frog_2(int i)
{
    if (i == n - 1)
        return 0;
    if (dp[i] != -1)
        return dp[i];

    dp[i] = INF;
    for (int k = 1; k <= up; k++)
    {
        if (i + k < n)
            dp[i] = min(dp[i], abs(inp[i + k] - inp[i]) + frog_2(i + k));
    }

    return dp[i];
}

void solve()
{
    cin >> n >> up;
    inp.resize(n);
    for (int i = 0; i < n; i++)
        cin >> inp[i];
    memset(dp, -1, sizeof(dp));
    cout << frog_2(0) << '\n';
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