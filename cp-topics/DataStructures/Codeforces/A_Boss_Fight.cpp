#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    unordered_map<int, int> freq;
    for (int x : v)
        freq[x]++;

    vector<pair<int, int>> vec(freq.begin(), freq.end());
    sort(vec.begin(), vec.end(), [](auto &a, auto &b)
         { return a.second > b.second; });

    int idx = vec.size();
    vector<int> ans(n);
    int x = 0;
    while (vec[0].second)
    {
        for (int i = 0; i < idx; i++)
            if (vec[i].second)
            {
                ans[x++] = vec[i].first;
                vec[i].second--;
            }
    }
    ans.resize(x);
    long long out = 0;
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    x = ans.size();
    for (int i = 0; i < x; i++)
    {
        out += ans[i];
    }
    if (count(ans.begin(), ans.end(), ans.back()) < freq[ans.back()])
        out += ans.back();
    cout << out << '\n';
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