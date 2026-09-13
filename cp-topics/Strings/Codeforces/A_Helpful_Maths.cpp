#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    int a[4] = {0};
    for (auto i : s)
    {
        if ('0' <= i && i <= '9')
            a[i - '0']++;
    }
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
            cout << "+";
        else
        {
            if (a[1])
            {
                cout << "1";
                a[1]--;
            }
            else if (a[2])
            {
                cout << "2";
                a[2]--;
            }
            else if (a[3])
            {
                cout << "3";
                a[3]--;
            }
        }
    }
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