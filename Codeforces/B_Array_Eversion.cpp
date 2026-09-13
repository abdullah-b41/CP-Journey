#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    int cnt = 0, mx = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] > mx)
        {
            cnt++;
            mx = v[i];
        }
    }
    cout << cnt << '\n';
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
