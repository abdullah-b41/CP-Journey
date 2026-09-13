#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    int sum = 0, book = 0, best = 0, mx = 0, idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > mx)
        {
            mx = v[i];
            idx = i;
        }
        sum += v[i];
        if (sum <= t)
        {
            book++;
            if (book > best)
                best = book;
        }
        else
        {
            sum = 0;
            book = 0;
            i = idx;
            mx = 0;
        }
    }
    cout << best << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
