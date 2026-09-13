#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    swap(s[0], s[4]);
    cout << s << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        solve();
    }

    return 0;
}