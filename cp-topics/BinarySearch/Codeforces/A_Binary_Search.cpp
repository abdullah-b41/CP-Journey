#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> v;

bool binarySearch(int x)
{
    int lo = 0, hi = n - 1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (v[mid] == x)
            return true;
        else if (v[mid] > x)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    return false;
}

void solve()
{
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    while (k--)
    {
        int x;
        cin >> x;
        bool found = binarySearch(x);
        cout << (found ? " YES\n" : "NO\n");
    }
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