#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    int sum = 0;
    for (auto i : s)x
        sum += i - '0';
    cout << (min(sum, n - sum)) << '\n';
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