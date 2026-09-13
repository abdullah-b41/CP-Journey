#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long b;
    cin >> b;
    long long a = 1;
    int ans = -1;
    for (int i = 0; i < 17; i++)
    {
        int tmp = a;
        long long prod = 1;
        while (tmp--)
        {
            prod *= a;
        }
        if (prod == b)
        {
            ans = a;
            break;
        }
        a++;
    }
    cout << ans << '\n';
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
