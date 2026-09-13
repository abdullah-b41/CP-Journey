#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    int mx = *max_element(v.begin(), v.end());
    for (int i = 0; i < k; i++)
    {
        for (auto &i : v)
        {
            i = mx - i;
        }
    }
    for (auto i : v)
        cout << i << " ";
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