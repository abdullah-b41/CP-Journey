#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '-')
        {
            if (s[i + 1] == '-')
                cout << 2;
            else if (s[i + 1] == '.')
                cout << 1;
            i++;
        }
        else
            cout << 0;
        }

    cout << "\n";
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