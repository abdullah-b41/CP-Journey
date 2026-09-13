#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, mn = 100;
    long long pro = 1;
    cin >> n;
    int arr[10] = {};

    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
        if (arr[j] < mn)
            mn = arr[j];
    }

    for (int j = 0; j < n; j++)
    {
        if (arr[j] == mn)
        {
            pro *= arr[j] + 1;
            mn = 100;
        }
        else
            pro *= arr[j];
    }

    cout << pro << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
