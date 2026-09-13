#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (auto &i : s)
        cin >> i;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << s[i] << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}
