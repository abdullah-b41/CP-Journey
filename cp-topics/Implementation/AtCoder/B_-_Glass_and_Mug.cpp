#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k, g, m;
    cin >> k >> g >> m;
    int glass = 0, mug = 0;
    while (k--)
    {
        if (glass == g)
        {
            glass = 0;
        }
        else if (mug == 0)
        {
            mug = m;
        }
        else
        {
            int pour = min(mug, g - glass);
            glass += pour;
            mug -= pour;
        }
    }
    cout << glass << ' ' << mug << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}
