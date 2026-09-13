#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    int lb = upper_bound(a.begin(), a.end(), a[0]) - a.begin();
    if (lb == n)
    {
        cout << "-1\n";
        return;
    }
    cout << lb << " " << a.size() - lb << '\n';
    for (int i = 0; i < lb; i++)
        cout << a[i] << " ";
    cout << '\n';
    for (int i = lb; i < n; i++)
        cout << a[i] << " ";
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