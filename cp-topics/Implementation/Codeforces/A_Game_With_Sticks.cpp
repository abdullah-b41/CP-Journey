#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int a, b;
    cin >> a >> b;
    int rounds = 0;
    while (a > 1 && b > 1)
    {
        a--;
        b--;
        rounds++;
    }
    if (!(rounds & 1))
        cout << "Akshat\n ";
    else
        cout << "Malvika\n";
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