#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int sum = 0;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
        sum += i;
    }

    if (n % 2 == 1)
    {
        cout << "NO\n";
        return;
    }

    if (sum == 0)
    {
        cout << "YES\n";
        return;
    }

    if (sum > 0)
    {
        for (int i = 1; i < n; i++)
        {
            if (v[i] == 1 && v[i - 1] == 1)
            {
                sum -= 4;
                if (sum == 0)
                {
                    cout << "YES\n";
                    return;
                }
            }
        }
        cout << "NO\n";
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (v[i] == -1 && v[i - 1] == -1)
            {
                sum += 4;
                if (sum == 0)
                {
                    cout << "YES\n";
                    return;
                }
            }
        }
        cout << "NO\n";
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