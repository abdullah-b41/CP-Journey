#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ones = n / 2;
    bool seven = false;

    if (n % 2 == 1)
    {
        ones--;
        seven = true;
    }

    while (ones || seven)
    {
        if (seven)
        {
            cout << "7";
            seven = false;
            continue;
        }
        cout << "1";
        ones--;
    }
    cout << '\n';
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
