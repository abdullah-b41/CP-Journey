#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    bool check = true;
    int cnt = 0;
    while (1)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != 0)
                check = false;
            else
                v[i] /= 2;
        }
        if (check)
            cnt++;
        else
            break;
    }
    cout << cnt << '\n';
}

int main()
{
    int t = 1;
    while (t--)
    {
        solve();
    }
}
