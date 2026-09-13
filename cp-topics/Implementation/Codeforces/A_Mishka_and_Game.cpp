#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int m = 0, c = 0;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
            m++;
        else if (y > x)
            c++;
    }
    if (m > c)
        cout << "Mishka" << '\n';
    else if (m < c)
        cout << "Chris" << '\n';
    else
        cout << "Friendship is magic!^^\n";
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