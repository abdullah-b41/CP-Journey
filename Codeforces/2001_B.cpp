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
    if (n % 2 == 0)
    {
        cout << "-1\n";
        return;
    }
    for (int i = 0, k = n; i < (n - 1) / 2; i++, k--)
        cout << k << ' ';
    for (int i = 1; i <= (n + 1) / 2; i++)
        cout << i << ' ';
    cout << '\n';
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
