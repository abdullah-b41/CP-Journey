#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n & 1)
    {
        for (int i = 0; i < 4; i++)
        {

            if (i == 2)
            {
                cout << n << " ";
                for (int j = 1; j < n; j++)
                    cout << j << " ";
            }
            else
                for (int j = 1; j <= n; j++)
                    cout << j << " ";
        }
        cout << '\n';
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            if (i != 2)
                for (int j = 1; j <= n; j++)
                    cout << j << " ";
            else
            {
                for (int j = n; j >= 1; j--)
                    cout << j << " ";
            }
        }
        cout << '\n';
    }
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