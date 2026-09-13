#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n, x, arr[100] = {};
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int best = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        if (arr[i] % x == 0)
        {
            cnt = arr[i] / x;
            best = max(best, cnt);
        }
    }
    cout << best * x << '\n';
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