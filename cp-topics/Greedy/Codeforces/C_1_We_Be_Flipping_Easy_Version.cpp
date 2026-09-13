#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] > 0)
            pos++;
    }

    if (pos == 0)
    {
        cout << 0 << '\n'
             << '\n';
        return;
    }
    if (pos == n)
    {
        cout << 1 << '\n'
             << n << '\n';
        return;
    }

    int cnt = 0;
    vector<int> ans;
    int flips = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] * (flips & 1 ? -1 : 1) > 0)
        {
            cnt++;
            ans.push_back(i + 1);
            flips++;

        }
    }

    cout << cnt << '\n';
    for (auto i : ans)
        cout << i << " ";
    cout << '\n';
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