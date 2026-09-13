#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    int even = 0, odd = 0, not4 = 0;

    for (auto &i : v)
    {
        cin >> i;
        if (i & 1)
            odd++;
        else if (i % 4)
            not4++;
        else if (i % 4 == 0)
            even++;
    }

    cout << max(even, max(odd, not4)) << '\n';
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