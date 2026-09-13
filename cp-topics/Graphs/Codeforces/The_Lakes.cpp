#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int row, col;
    cin >> row >> col;
    vector<vector<int>> inp(row, vector<int>(col));
    for (auto &i : inp)
    {
        for (auto &j : i)
            cin >> j;
    }

    long long ans = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            bool take[8] = {true};
            if (i - 1 >= 0)
                take[0] = (inp[i - 1][j] == 0 ? false : true);
            if (i + 1 <= row - 1)
                take[0] = (inp[i + 1][j] == 0 ? false : true);
            if (j - 1 >= 0)
                take[0] = (inp[i][j - 1] == 0 ? false : true);
            if (j + 1 <= col - 1)
                take[0] = (inp[i][j + 1] == 0 ? false : true);
            if (i - 1 >= 0 && j+1<=)
                take[0] = (inp[i - 1][j] == 0 ? false : true);
            if (i + 1 <= row - 1)
                take[0] = (inp[i + 1][j] == 0 ? false : true);
            if (j - 1 >= 0)
                take[0] = (inp[i][j - 1] == 0 ? false : true);
            if (j + 1 <= col - 1)
                take[0] = (inp[i][j + 1] == 0 ? false : true);
        }
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