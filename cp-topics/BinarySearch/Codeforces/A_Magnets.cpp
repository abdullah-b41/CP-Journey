#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int grps = 0, prev = 0;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    prev = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i] != prev)
        {
            grps++;
            prev = v[i];
        }
    }
    cout << ++grps << '\n';
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