#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int nb, nc, k, cnt = 0;
    cin >> nb >> nc >> k;
    int b[100] = {}, c[100] = {};

    for (int i = 0; i < nb; i++)
        cin >> b[i];
    for (int i = 0; i < nc; i++)
        cin >> c[i];

    for (int i = 0; i < nb; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            if (b[i] + c[j] <= k)
                cnt++;
        }
    }
    cout << cnt << '\n';
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