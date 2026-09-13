#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    int sum = 0;
    while (n)
    {
        sum += n % 2;
        n /= 2;
    }
    if (sum & 1)
        cout << "ODD\n";
    else
        cout << "EVEN\n";
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