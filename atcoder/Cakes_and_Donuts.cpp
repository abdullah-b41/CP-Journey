#include <bits/stdc++.h>
using namespace std;

// clang-format off
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define cout(x) cout << x << "\n";
#define sort(v) sort(v.begin(), v.end());
#define cin(v) for (auto &i : v) cin >> i;
#define coutv(v) for(int i=0; i<(int)v.size(); i++) cout << v[i] << (i == (int)v.size()-1 ? "" : " "); cout << "\n";
#define vct(v,n) vector<int> v(n); cin(v);
// clang-format on

void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum = 4 * i + 7 * j;
            if (sum >= n)
                break;
        }
        if (sum == n)
        {
            flag = true;
            break;
        }
    }
    cout << (flag ? "Yes" : "No") << '\n';
}

int main()
{
    fast;

    int t = 1;
    while (t--)
        solve();

    return 0;
}
