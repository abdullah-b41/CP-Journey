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
    int n, m;
    cin >> n >> m;
    int d = max(n, m);
    vct(ll, v1, d);
    cin(i, v1, n);
    vct(ll, v2, d);
    cin(i, v2, m);
    vct(ll, freq_a, n + m + 1);
    vct(ll, freq_b, n + m + 1);
    rep(i, 0, d)
    {
        freq_a[v1[i]]++;
        freq_b[v2[i]]++;
    }
    if (n < m)
    {
        for (int i = 1; i <= m + n; i++)
        {
            if (freq_a[i] > freq_b[i])
            {
                cout << "NO" << '\n';
                return;
            }
        }
    }
    else
    {
        for (int i = 1; i <= m + n; i++)
        {
            if (freq_b[i] > freq_a[i])
            {
                cout << "NO" << '\n';
                return;
            }
        }
    }
    cout << "YES" << '\n';
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
