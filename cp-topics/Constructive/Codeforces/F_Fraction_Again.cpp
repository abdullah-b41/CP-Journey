#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k;
    cin >> k;
    if (k == 1)
        cout << "2 4 4" << '\n';
    else if (k == 2)
        cout << "1 2 2" << '\n';
    else if (k == 3)
        cout << "1 1 1" << '\n';
    else
        cout << "-1\n";
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