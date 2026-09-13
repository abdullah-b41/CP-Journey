#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    cout << (n % 3 == 0 ? "Second\n" : "First\n");
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