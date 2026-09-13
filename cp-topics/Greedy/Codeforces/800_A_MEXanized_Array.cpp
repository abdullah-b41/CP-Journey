#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    int sum = 0;
    int a[200] = {0}, fa[200] = {0};

    for (int i = 0; i < n; i++)
    {
        if (k != x)
        {
            if (i < k && i <= x)
                a[i] = i;
            else
                a[i] = x;
        }
        else
        {
            if (i < k)
                a[i] = i;
            else
                a[i] = k - 1;
        }
        sum += a[i];
        fa[a[i]]++;
    }

    int mex = 0;
    for (int i = 0; i < 200; i++)
    {
        // first one with 0 frequency is lowest so thats MEX.
        if (fa[i] == 0)
        {
            mex = i;
            break;
        }
    }
    if (mex != k)
        sum = -1;

    cout << sum << '\n';
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