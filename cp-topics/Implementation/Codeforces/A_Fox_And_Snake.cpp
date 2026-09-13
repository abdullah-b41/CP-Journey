#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i & 1) == 0)
                cout << "#";
            else
            {
                if ((cnt & 1) == 0)
                {
                    if (j != m - 1)
                        cout << ".";
                    else
                        cout << "#";
                }
                else
                {
                    if (j != 0)
                        cout << ".";
                    else
                        cout << "#";
                }
            }
        }
        cout << "\n";
        if (i & 1)
            cnt++;
    }
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