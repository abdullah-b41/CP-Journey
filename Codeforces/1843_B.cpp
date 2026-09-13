#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (auto &i : v)
        cin >> i;

    int mn = *min_element(v.begin(), v.end());
    int cnt = 0;

    for (auto i : v)
        if (i > mn)
            cnt++;

    cout << cnt << '\n';
}

int main()
{
    fast;

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}