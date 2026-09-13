#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    int cnt2021 = n % 2020;
    int cnt2020 = (n - cnt2021) / 2020 - cnt2021;

    if (cnt2020 >= 0 && cnt2020 * 2020 + cnt2021 * 2021 == n)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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