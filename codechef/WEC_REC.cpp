#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n, x, k;
    cin >> n >> x >> k;
    vector<int> v(n), grp(n);

    for (auto &i : v)
        cin >> i;

    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < k; i++)
    {
        int mx = *max_element(v.begin(), v.end());
        if (mx == -1)
            break;
        for (int j = 0; j < n; j++)
        {
            if (v[j] == mx)
            {
                grp[i]++;
                v[j] = -1;
            }
        }
    }

    int eligible = 0;
    for (int i = 0; i < k; i++)
    {
        int take = min(grp[i], x);
        eligible += take;
        x -= take;
        if (x <= 0)
            break;
    }

    cout << eligible << '\n';
}

int main()
{
    fast;

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}