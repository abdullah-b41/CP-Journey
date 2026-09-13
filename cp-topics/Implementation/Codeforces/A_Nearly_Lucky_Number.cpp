#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    int cnt = 0;
    while (n > 0)
    {
        int d = n % 10;
        if (d == 4 || d == 7)
            cnt++;
        n /= 10;
    }
    cout << (cnt == 4 || cnt == 7 ? "YES\n" : "NO\n");
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