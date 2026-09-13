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
    vct(int, v, n);
    cin(i, v, n);
    vct(ll, freq, 4);
    ll cnt = 0;
    rep(i, 0, n) if (v[i] == 0 || v[i] == 1 || v[i] == 2 || v[i] == 3) freq[v[i]]++;
    cnt += freq[0] * (freq[0] - 1) / 2;
    cnt += freq[0] * (n - freq[0]);
    cnt += freq[1] * freq[2];
    cnt += freq[1] * freq[3];
    cout(cnt);
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
