#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int best = 0;
    for (int i = 0; i < n; i++)
    {
        int length = 0;
        while (i < n && s[i] == '#')
        {
            length++;
            i++;
        }
        best = max(best, length);
    }

    cout << (best + 1) / 2 << '\n';
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