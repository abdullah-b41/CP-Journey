#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0 && (i == 0 || v[i - 1] == 0))
        {
            cnt++;
        }
    }
    cout << (cnt < 3 ? cnt : 2) << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
