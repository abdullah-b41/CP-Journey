#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    for (auto i : s)
    {
        if (i == 'H' || i == 'Q' || i == '9')
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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