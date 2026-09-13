#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (auto &i : v)
    {
        cin >> i;
    }
    vector<int> cpy = v;

    int shift = 0;
    for (int i = 0; i + 1 < n; i++)
    {
        if ((v[i] + v[i + 1]) % 2 == 1)
        {
            v[i] = 0;
            shift++;
        }
    }

    int shift2 = 0;
    for (int i = n - 1; i > 0; i--)
    {
        if ((cpy[i] + cpy[i - 1]) % 2 == 1)
        {
            cpy[i - 1] = 0;
            shift2++;
        }
    }

    if (shift == 0 && shift == shift2)
        cout << "1\n";
    else
        cout << max(n - shift, n - shift2) << '\n';
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