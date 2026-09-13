#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a + b == 9)
        cout << "Nine\n";
    else if (a - b == 9)
        cout << "Nine\n";
    else if (a * b == 9)
        cout << "Nine\n";
    else if (b * 9 == a)
        cout << "Nine\n";
    else
        cout << "Nein\n";
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