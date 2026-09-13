#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<int> freq(27);
    for (auto i : s)
        freq[i - 'a']++;
    int cnt = 0;
    for (auto i : freq)
        if (i)
            cnt++;
    cout << (cnt & 1 ? "IGNORE HIM!" : "CHAT WITH HER!") << '\n';
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