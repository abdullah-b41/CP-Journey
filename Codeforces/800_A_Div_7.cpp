#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int t;
    cin >> t;
    if (t < 14)
        cout << 14 << '\n';
    else if (t % 7 == 0)
        cout << t << '\n';
    else
    {
        for (int i = 0; i < 9; i++)
        {
            t = t - t % 10 + i;
            if (t % 7 == 0)
            {
                cout << t << '\n';
                break;
            }
        }
    }
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