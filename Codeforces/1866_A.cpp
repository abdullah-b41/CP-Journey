#include <bits/stdc++.h>
using namespace std;

// clang-format off
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define sort(v) sort(v.begin(), v.end());
#define cin(v) for (auto &i : v) cin >> i;
#define cout(v) for(int i=0; i<v.size(); i++) cout << v[i] << (i == v.size()-1 ? "" : " ") cout << "\n";
#define vct(v,n) vector<int> v(n); cin(v);
#define pb push_back
#define all(v) v.begin(), v.end()
// clang-format on

void solve()
{
    int n;
    cin >> n;
    vct(v, n);
    int mn = 1e5;
    for (int i = 0; i < n; i++)
        mn = min(mn, v[i] > 0 ? v[i] - 0 : 0 - v[i]);
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
