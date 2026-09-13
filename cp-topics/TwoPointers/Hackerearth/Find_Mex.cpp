#include <bits/stdc++.h>
using namespace std;

int a[200001];

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = x;
    }

    int mex = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        a[v[i]]++;
        while (a[j] != 0)
        {
            j++;
        }
        mex = j;
        cout << mex << ' ';
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