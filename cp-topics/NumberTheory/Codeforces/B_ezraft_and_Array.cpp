#include <bits/stdc++.h>
using namespace std;

vector<int> lcm;

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "1\n";
        return;
    }
    if (n == 2)
    {
        cout << "-1\n";
        return;
    }
    cout << "1 2 3" << ' ';
    n -= 3;
    long long sum = 6;
    while (n--)
    {
        cout << sum << ' ';
        sum *= 2;
    }
    cout << '\n';
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
