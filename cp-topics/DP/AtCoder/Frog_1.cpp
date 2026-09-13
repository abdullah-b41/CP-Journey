#include <bits/stdc++.h>
using namespace std;

vector<int> dp(100001, -1);
vector<int> inp;

int frog_1(int i, int n)
{
    if (i == n - 1)
        return 0;
    if (i + 1 == n - 1)
        return abs(inp[n - 1] - inp[i]);
    if (dp[i] != -1)
        return dp[i];

    int diff1 = abs(inp[i + 1] - inp[i]) + frog_1(i + 1, n);
    int diff2 = abs(inp[i + 2] - inp[i]) + frog_1(i + 2, n);

    dp[i] = min(diff1, diff2);
    return dp[i];
}

void solve()
{
    int n;
    cin >> n;
    inp.resize(n);
    for (int i = 0; i < n; i++)
        cin >> inp[i];
    cout << frog_1(0, n) << '\n';
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