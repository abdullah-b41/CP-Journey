#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// clang-format off
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define sz(name) (int)name.size()
#define all(name) name.begin(), name.end()
#define cout(x) cout << x << "\n";
#define sortv(name) sort(name.begin(), name.end());
#define rep(i,start,end) for(int i=start;i<end;i++)
#define cin(i,name,size) for(int i=0;i<size;i++) cin >> name[i];
#define coutv(name) for(int i=0; i<(int)name.size(); i++) cout << name[i] << (i == (int)name.size()-1 ? "" : " "); cout << "\n";
#define vct(type,name,size) vector<type> name(size);
// clang-format on

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int ans = v[n - 1] - v[0];

    for (int i = 1; i < n; i++)
    {
        int tmp = v[i - 1] - v[i];
        ans = max(ans, tmp);
    }
    for (int i = 1; i < n; i++)
    {
        int tmp = v[i] - v[0];
        ans = max(ans, tmp);
    }
    for (int i = 1; i < n - 1; i++)
    {
        int tmp = v[n - 1] - v[i];
        ans = max(ans, tmp);
    }
    cout << ans << '\n';
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