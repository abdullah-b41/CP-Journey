#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    int n = a.length();
    for (int i = 0; i < n; i++)
        cout << (a[i] == b[i] ? "0" : "1");
    cout << '\n';
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