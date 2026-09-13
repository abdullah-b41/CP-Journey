#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp = k;
        int j = i;

        while (j < n && tmp > 0)
        {
            if (tmp - v[j] < 0)
                break;
            else
                tmp -= v[j];
            j++;
        }
        int maxCost = 0;

        for (int m = i; j < n && m <= j; m++)
            maxCost = max(maxCost, v[m]);

        if(maxCost>v[j])

        
        while (j < n && tmp > 0)
        {
            if (tmp - v[j] < 0)
                break;
            else
                tmp -= v[j];
            j++;
        }

        ans = max(ans, j - i);
    }
    cout << ans << '\n';
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