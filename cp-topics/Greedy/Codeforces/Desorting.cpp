#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int gap = 2e9;
    for (int i = 1; i < n; i++)
    {
        int check = v[i] - v[i - 1];
        if (check < 0)
        {
            cout << "0\n";
            return;
        }
        gap = min(gap, check);
    }
    cout << gap / 2 + 1 << '\n';
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