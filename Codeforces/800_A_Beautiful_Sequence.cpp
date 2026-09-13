#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin >> n;
    ll arr[101] = {};
    bool result = false;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= i + 1)
            result = true;
    }

    cout << (result ? "YES\n" : "NO\n");
    return;
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