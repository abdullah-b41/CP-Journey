#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string a = "I hate ", b = "I love ";
    if (n == 1)
    {
        cout << a << "it\n";
        return;
    }
    else
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
                cout << b;
            else
                cout << a;
            if (i != n - 1)
                cout << "that ";
        }
    cout << "it" << '\n';
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