#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if (j < i)
                cout << "(";
            else if (j >= 2 * n - i)
                cout << ")";
            else
            {
                cout << "()";
                j++;
            }
        }
        cout << '\n';
    }
}

int main()
{
    fast;

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}