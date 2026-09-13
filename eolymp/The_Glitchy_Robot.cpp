#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int x = 0, y = 0, n = s.length();
    vector<int> v(4, 0);
    for (int j = 0; j < n; j++)
    {
        if (s[j] == 'U')
            v[0]++;
        else if (s[j] == 'D')
            v[1]++;
        else if (s[j] == 'R')
            v[2]++;
        else if (s[j] == 'L')
            v[3]++;
    }

    y += v[0];
    y -= v[1];
    x += v[2];
    x -= v[3];

    if (v[2] > 0 && v[3] > 0)
    {
        if (v[2] >= v[3])
            x++;
        else if (v[3] > v[2])
            x--;
    }

    if (v[0] > 0 && v[1] > 0)
    {
        if (v[0] >= v[1])
            y++;
        else if (v[1] > v[0])
            y--;
    }

    cout << abs(x) + abs(y) << '\n';
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
