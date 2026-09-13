#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    int seconds = 0;

    if (s[0] == '0')
    {
        seconds += 10;
    }
    else
        seconds += s[0] - '0';

    for (int i = 1; i < n; i++)
    {
        if (s[i] == '0' && s[i - 1] != '0')
        {
            seconds += '9' - s[i - 1] + 2;
        }
        else if (s[i - 1] == '0' && s[i] != '0')
        {
            seconds += '9' - s[i] + 2;
        }
        else
            seconds += abs(s[i] - s[i - 1]) + 1;
    }
    cout << seconds << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
