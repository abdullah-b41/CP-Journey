#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    long long sum = 0;
    for (auto &i : v)
    {
        cin >> i;
        sum += i;
    }

    sort(v.begin(), v.end(), greater<int>());
    int x = v[0];
    for (int i = 1; i < n; i++)
    {
        if (sum - x < x)
        {
            cout << i << '\n';
            return;
        }
        x += v[i];
    }

    if (sum - x < x)
        cout << n << '\n';
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