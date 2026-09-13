#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool is_choto(int mid, int k, int n)
{
    int total_non_div = mid - mid / n;
    if (total_non_div >= k)
        return true;
    return false;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    ll l = 1, r = 2e9;
    ll ans = 0;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        if (is_choto(mid, k, n))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
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