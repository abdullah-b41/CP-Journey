#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    cout << (n % 11 == 0 ? "No\n" : "Yes\n");
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