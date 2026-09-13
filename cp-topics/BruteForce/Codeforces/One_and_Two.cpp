#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> pos2;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 2)
            pos2.push_back(i);
    }

    int x = pos2.size();

    if (x == 0)
    {
        cout << 1 << '\n';
        return;
    }
    else if (x % 2 != 0)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << pos2[x / 2 - 1] + 1 << '\n';
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