#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int maxUnique = 1;
    vector<int> v(26);
    v[s[0] - 'a']++;
    for (int i = 1; i < n; i++)
    {
        int cnt = 0;
        while (i < n && s[i] == s[i - 1])
        {
            cnt++;
            i++;
        }
        cnt++;
        if (cnt>1)
            i--;
        v[s[i] - 'a'] = max(v[s[i] - 'a'], cnt);
    }
    for (auto &i : v)
        maxUnique += i;
    cout << --maxUnique << '\n';
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