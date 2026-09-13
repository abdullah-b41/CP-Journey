#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            cnt++;
    }
    cout << cnt << '\n';
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