#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    int pos = 0, neg = 0;
    for (auto &i : v)
    {
        cin >> i;
        if (i > 0)
            pos++;
        else
            neg++;
    }

    if (pos >= neg)
    {
        if (neg % 2 == 0)
            cout << 0 << '\n';
        else
            cout << 1 << '\n';
    }
    else
    {
        int ans = 0;
        while (neg > pos || neg % 2 != 0)
        {
            neg--;
            pos++;
            ans++;
        }
        cout << ans << '\n';
    }
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