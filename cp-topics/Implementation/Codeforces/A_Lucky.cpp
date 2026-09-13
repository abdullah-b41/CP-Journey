#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int d = log10(n) + 1;
    int check = 0;
    for (int i = 0; i < d; i++)
    {
        int x = n % 10;
        if (i < 3)
            check += x;
        else
            check -= x;
        n /= 10;
    }
    cout << (check ? "NO\n" : "YES\n");
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}