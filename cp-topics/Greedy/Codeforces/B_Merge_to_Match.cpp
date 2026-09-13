#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    if (*b.begin() < *a.begin() || a.back() < b.back())
    {
        cout << "NO\n";
        return;
    }

    int cnt = 0;
    for (auto it : b)
    {
        if (cnt == 0)
        {
            if (*a.begin() < it)
            {
                cnt++;
            }
            a.erase(a.begin());
        }
        else
        {

        }
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