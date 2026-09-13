#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    set<int> uniq;
    int tmp, sz = uniq.size();
    while (sz != 4)
    {
        n++;
        tmp = n;
        while (tmp > 0)
        {
            uniq.insert(tmp % 10);
            tmp /= 10;
        }
        sz = uniq.size();
        uniq.clear();
    }
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