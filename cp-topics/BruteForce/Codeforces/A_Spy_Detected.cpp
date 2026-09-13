#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    unordered_map<int, int> mp;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mp[x]++;
    }
    for (auto i : mp)
        if (i.second == 1)
        {
            cout << find(v.begin(), v.end(), i.first) - v.begin() + 1 << "\n";
            return;
        }
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