#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin >> n;
    for (int i = 10; i > 0; i--)
        if (n % i == 0)
        {
            cout << i << '\n';
            break;
        }
}

int main()
{
    fast;

    int t = 1;
    while (t--)
        solve();

    return 0;
}