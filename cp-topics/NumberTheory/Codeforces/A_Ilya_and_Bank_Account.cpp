#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    if (n >= 0)
        cout << n;
    else
    {
        if (n / 10 >= (n / 100) * 10 + n % 10)
            cout << n / 10;
        else
            cout << (n / 100) * 10 + n % 10;
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}