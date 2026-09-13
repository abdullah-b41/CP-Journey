#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> s;
    vector<string> need;

    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        s.push_back(x);
    }

    for (int i = 0; i < m; i++)
    {
        string x;
        cin >> x;
        need.push_back(x);
    }

    vector<int> freq(26);
    for (int i = 0; i < n; i++)
        freq[s[i][0] - 'a']++;

    for (int i = 0; i < m; i++)
    {
        bool found = true;
        string x = need[i];
        for (int j = 0; j < need[i].length(); j++)
        {
            if (freq[need[i][j] - 'A'] == 0)
            {
                found = false;
                break;
            }
        }
        if (!found)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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