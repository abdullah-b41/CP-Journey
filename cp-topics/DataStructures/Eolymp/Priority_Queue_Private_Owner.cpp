#include <bits/stdc++.h>
using namespace std;

void solve()
{
    priority_queue<pair<int, string>> pq;
    vector<string> cmd = {"ADD", "POP", "CHANGE"};
    string s;
    while (cin >> s)
    {
        string wht;
        for (int i = 0; i < 3; i++)
            wht += s[i];
        if (wht == cmd[1])
        {
            cout << pq.top().second << " " << pq.top().first << '\n';
        }
        else if (wht == cmd[0])
        {
            string num;
            int n = s.length();
            for (int i = 4; i < n - 1; i++)
                num += s[i];
            pq.push({(int)s[n - 1], num});
        }
        else
        {
            string num;
            int n = s.length();
            for (int i = 7; i < n - 1; i++)
                num += s[i];
            auto it = pq.find()
        }
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