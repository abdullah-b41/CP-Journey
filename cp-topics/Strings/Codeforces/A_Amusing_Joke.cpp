#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> v(26);
    string a, b, c;
    cin >> a >> b >> c;
    for (auto i : a)
        v[i - 'A']++;
    for (auto i : b)
        v[i - 'A']++;

    for (auto i : c)
        v[i - 'A']--;
    for (auto i : v)
        if (i != 0)
        {
            cout << "NO\n";
            return;
        }
    cout << "YES\n";
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