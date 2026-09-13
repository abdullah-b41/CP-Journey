#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int div = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i != n)
                div += 2;
            else
                div++;
        }
    }
    cout << div << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}