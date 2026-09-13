#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        vector<int> v(n);
        v[0] = x, v[n - 1] = y;

        for (int i = n - 2, j = 1; i > 0; i--, j++)
        {
            v[i] = v[i + 1] - j;
        }

        int m = n - 1;
        vector<int> b(m);

        for (int i = 0; i < n - 1; ++i)
        {
            b[i] = v[i + 1] - v[i];
        }

        bool flag = false;
        for (int i = 0; i < m - 1; i++)
        {
            if (b[i + 1] >= b[i])
            {
                cout << "-1\n";
                flag = true;
                break;
            }
        }

        if (flag)
            continue;

        for (auto &i : v)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}
