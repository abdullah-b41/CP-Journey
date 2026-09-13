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
    ll a, n;
    cin >> a >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    ll diff = 1e17;

    for (ll i = *min_element(all(v)); i <= max(a, *max_element(all(v))); i++)
    {
        ll tmp = i;
        bool ok = true;

        while (tmp > 0)
        {
            int d = tmp % 10;
            tmp /= 10;

            if (d != v[0] && d != v[1])
            {
                ok = false;
                break;
            }
        }

        if (ok)
            diff = min(diff, llabs(a - i));
    }

    cout << diff << "\n";
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
