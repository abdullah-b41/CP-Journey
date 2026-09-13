#include <bits/stdc++.h>
using namespace std;

#define N 100001

void solve()
{
    int n, k;
    cin >> n >> k;

    int a[N] = {}, acp[N] = {}, idx[N] = {}, b[N] = {}, ans[N] = {};
    bool x[N] = {false};

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        acp[i] = a[i];
        idx[i] = i;
    }

    for (auto &i : b)
        cin >> i;

    // sort
    for (int i = 0; i + 1 < n; i++)
    {
        for (int j = i + 1; j < n;)
        {
            if (a[j] < a[i])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
            else
                j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == acp[j] && x[j]==false)
            {
                idx[i]
            }
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << ' ';
    // }
    // cout << '\n';

    for (int i = 0; i < n; i++)
    {
        cout << idx[i] << ' ';
    }
    cout << '\n'
         << '\n';
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
