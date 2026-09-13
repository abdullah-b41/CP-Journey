#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, t;
    string s;
    cin >> n >> t >> s;
    while (t--)
    {
        for (int i = 0; i + 1 < n; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }
    cout << s << '\n';
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