#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> need(n), price(n);
    for (int i = 0; i < n; i++)
        cin >> need[i] >> price[i];

    int cost = 0;
    int presentCost = price[0];
    for (int i = 0; i < n; i++)
    {
        presentCost = min(presentCost, price[i]);
        cost += need[i] * presentCost;
    }
    cout << cost << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;

    while (t--)
    {
        solve();
    }

    return 0;
}
