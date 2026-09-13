#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    for (int i = 0; i < n; i++)
    {
        int smaller = 0, bigger = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[i])
                smaller++;
            if (v[j] > v[i])
                bigger++;
        }
        cout << max(smaller, bigger) << ' ';
    }
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