#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int row;
    cin >> row;
    int input[row][3];
    int check[3] = {};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> input[i][j];
            check[j] += input[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (check[i] != 0)
        {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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
