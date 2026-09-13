#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int ans = 0;
    // for (int i = n; i > 0; i--)
    // {
    //     long long sum = 0;
    //     int term = i;

    //     while (sum < n && term > 0)
    //     {
    //         sum += term;
    //         term /= k;
    //     }

    //     if (sum >= n)
    //     {
    //         ans = i;
    //     }
    // }

    int l = 1, r = n;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        long long sum = 0;
        int term = mid;

        while (sum < n && term > 0)
        {
            sum += term;
            term /= k;
        }

        if (sum >= n)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

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