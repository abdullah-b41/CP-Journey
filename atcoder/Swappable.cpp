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
ll a[1000000000] = {};

void solve()
{
    fill(a, a + 1000000000, 0);
    int n;
    cin >> n;
    vct(ll, v, n);
    cin(i, v, n);
    ll total = n * (n - 1) / 2;
    rep(i, 0, n)
        a[v[i]]++;

    ll common = 0;
    rep(i, 1, *max_element(all(v)) + 1)
    {
        if (a[i] > 1)
            common += a[i] * (a[i] - 1) / 2;
    }
    cout(total - common);
}

int main()
{
    fast;

    int t = 1;
    while (t--)
        solve();

    return 0;
}
