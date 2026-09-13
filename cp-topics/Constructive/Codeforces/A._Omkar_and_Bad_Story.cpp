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

    vct(int, b, n);
    b = v;
    sort(all(b));
    int s = 0;
    rep(i, 0, n - 1 + s)
    {
        if (b[i] < 0)
        {
            cout << "No\n";
            return;
        }
        rep(j, i + 1, n + s)
        {
            bool ok = false;
            int d = abs(b[i] - b[j]);
            rep(k, 0, n + s)
            {
                if (d == b[k])
                {
                    ok = true;
                    break;
                }
            }
            if (!ok)
            {
                b.pb(d);
                s++;
                i = -1;
                break;
            }
            if (n + s > 300)
                break;
        }
        if (n + s > 300)
            break;
    }
    sort(all(b));
    cout << "Yes\n";
    cout(n + s);
    coutv(b);
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