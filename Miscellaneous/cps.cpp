#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
#define sort(v) sort(v.begin(), v.end());
#define cin(v)        \
    for (auto &i : v) \
        cin >> i;
#define cout(v)      \
    for (auto i : v) \
        cout << i << ' ';

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    cin(v);
    sort(v);
    int mn;

    cout << mn << '\n';
}

int main()
{
    fast;

    int t = 1;
    while (t--)
        solve();

    return 0;
}