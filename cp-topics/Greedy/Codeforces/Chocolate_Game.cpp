#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int total = 0;
    int alice = 0;
    int bob = 0;

    for (auto &i : v)
    {
        cin >> i;
        total += i;
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] >= 2)
        {
            if (total % 2 == 0)
                alice += 2 * (v[i] / 2);
            else
                bob += 2 * (v[i] / 2);

            total -= 2 * (v[i] / 2);
            v[i] -= 2 * (v[i] / 2);
        }
    }

    alice += total / 2;

    cout << alice << '\n';
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