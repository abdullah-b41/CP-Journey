#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> v(4);
    for (auto &i : v)
        cin >> i;
    int mx = *max_element(v.begin(), v.end());
    for (auto &i : v)
    {
        if (i != mx)
            cout << mx - i << " ";
    }
    cout << "\n";
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