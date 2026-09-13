#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k;
    cin >> k;

    vector<int> liked(k + 1);

    for (int i = 1, idx = 1; idx < k + 1; i++)
    {
        if (i % 3 != 0 && i % 10 != 3)
        {
            liked[idx++] = i;
        }
    }

    cout << liked[k] << '\n';
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
