#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, s1;
    cin >> s >> s1;
    for (auto &i : s)
        i = tolower(i);
    for (auto &i : s1)
        i = tolower(i);
    if (s < s1)
        cout << "-1\n";
    else if (s > s1)
        cout << "1\n";
    else
        cout << "0\n";
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