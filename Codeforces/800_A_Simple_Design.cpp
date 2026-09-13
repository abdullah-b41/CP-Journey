#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    ll x, k;
    cin >> x >> k;

    while (1)
    {
        ll tmp = x;
        int sum = 0;
        int digit = log(x) + 1;
        for (int j = 0; j < digit; j++)
        {
            sum += tmp % 10;
            tmp /= 10;
        }
        if (sum % k != 0)
            x++;
        else
            break;
    }
    cout << x << '\n';
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