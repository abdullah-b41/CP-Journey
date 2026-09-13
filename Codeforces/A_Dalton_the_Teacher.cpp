#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    int swaps = 0;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == i)
        {

        }
    }
    for (auto i : v)
        cout << i << ' ';
    cout << '\n';
    cout << swaps << '\n';
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
