#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long sum = 0;
    vector<int> v(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    cout << -sum << '\n';
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
