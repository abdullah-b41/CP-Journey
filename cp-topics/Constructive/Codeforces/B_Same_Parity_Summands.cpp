#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    bool check = true;

    if (k > n)
        check = false;
    if (n % 2 == 1 && k % 2 == 0)
        check = false;

    if (!check)
    {
        cout << "NO" << '\n';
        return;
    }


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
