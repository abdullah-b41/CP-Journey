#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    vector<int> cpy = v;
    sort(cpy.begin(), cpy.end());
    if(cpy==v)
    {
        cout << "YES\n";
        return;
    }
    if (k < 2)
        cout << "NO\n";
    else 
        cout << "YES\n";
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