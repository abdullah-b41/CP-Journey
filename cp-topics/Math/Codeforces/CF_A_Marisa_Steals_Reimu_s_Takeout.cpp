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
    int cnt = 0;
    sort(all(v));
    int freq[3] = {};
    rep(i, 0, n) freq[v[i]]++;

    int m = min(freq[1], freq[2]);
    cnt += m;
    cnt += (freq[1] - m) / 3;
    cnt += (freq[2] - m) / 3;
    cnt += freq[0];

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
