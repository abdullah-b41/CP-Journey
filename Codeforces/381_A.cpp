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
    ll sereja = 0, dima = 0;

    for (int i = 0; i < n; i++)
    {
        //* v.back == *(v.end()-1), both represent same value.
        if (*v.begin() > v.back())
        {
            if (i % 2 == 0)
                sereja += *v.begin();
            else
                dima += *v.begin();
            v.erase(v.begin());
        }
        else
        {
            if (i % 2 == 0)
                sereja += v.back();
            else
                dima += v.back();
            v.pop_back();
        }
    }
    // for (int i = 0, j = n - 1, k = 0; i <= j; k++)
    // {
    // if (k % 2 == 0)
    // {
    //     if (v[i] > v[j])
    //     {
    //         sereja += v[i];
    //         i++;
    //     }
    //     else
    //     {
    //         sereja += v[j];
    //         j--;
    //     }
    // }
    // else
    // {
    //     if (v[i] > v[j])
    //     {
    //         dima += v[i];
    //         i++;
    //     }
    //     else
    //     {
    //         dima += v[j];
    //         j--;
    //     }
    // }
    // }

    cout << sereja << ' ' << dima << endl;
}

int main()
{
    fast;

    int t = 1;
    while (t--)
        solve();

    return 0;
}
