#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    for (auto &it : p)
        cin >> it;
    vector<int> copy(n);
    copy = p;
    sort(p.begin(), p.end());
    int steps = 0;
    while (copy != p)
    {

        steps++;
    }
    cout << steps << '\n';
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
