#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int a, b;
    cin >> a >> b;

    vector<int> v(a), v2(b);
    for (auto &i : v)
        cin >> i;
    for (auto &i : v2)
        cin >> i;
    sort(v.begin(), v.end());

    for (auto i : v2)
    {
        cout << upper_bound(v.begin(), v.end(), i) - v.begin() << " ";
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