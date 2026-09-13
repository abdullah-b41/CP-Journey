#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    int best = 0;
    queue<int> change;

    for (int i = 0; i < n; i++)
    {
        bool one = false;
        if (v[i] == 1 || v[i] == -1)
        {
            int j = i + 1;
            int cnt = 0;
            while (j < n && v[j] != 1)
            {
                j++;
                cnt++;
            }

            if (cnt > best)
            {
                max = cnt;
                j = i + 1;
                queue<int> change;
                while (j < n && v[j] != 1)
                {
                    if (v[j] == -1)
                        change.push(j);
                    j++;
                }
            }

            j--;
            j = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
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