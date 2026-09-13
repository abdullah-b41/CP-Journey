#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    char s[3][4]; //* claude
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> s[i][j];

    // rows
    for (int i = 0; i < 3; i++)
        if (s[i][0] == s[i][1] && s[i][1] == s[i][2] && s[i][0] != '.')
        {
            cout << s[i][0] << '\n';
            return;
        }

    // cols
    for (int i = 0; i < 3; i++)
        if (s[0][i] == s[1][i] && s[1][i] == s[2][i] && s[0][i] != '.')
        {
            cout << s[0][i] << '\n';
            return;
        }

    // diags
    if (s[0][0] == s[1][1] && s[1][1] == s[2][2] && s[0][0] != '.')
    {
        cout << s[0][0] << '\n';
        return;
    }
    if (s[0][2] == s[1][1] && s[1][1] == s[2][0] && s[0][2] != '.')
    {
        cout << s[0][2] << '\n';
        return;
    }

    cout << "DRAW\n";
    //!
    // char s[3][4]; //* mine
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> s[i][j];
    //     }
    // }
    // int cnt_o = 0, cnt_h = 0, cnt_p = 0;
    // for (int i = 0; i < 3; i++)
    // {
    //     // row wise
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if (s[i][j] == 'O')
    //             cnt_o++;
    //         else if (s[i][j] == 'X')
    //             cnt_h++;
    //         else if (s[i][j] == '+')
    //             cnt_p++;
    //     }
    //     if (cnt_o == 3)
    //     {
    //         cout << "O" << '\n';
    //         return;
    //     }
    //     else
    //         cnt_o = 0;
    //     if (cnt_h == 3)
    //     {
    //         cout << "X" << '\n';
    //         return;
    //     }
    //     else
    //         cnt_h = 0;
    //     if (cnt_p == 3)
    //     {
    //         cout << "+" << '\n';
    //         return;
    //     }
    //     else
    //         cnt_p = 0;

    //     // column wise
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if (s[j][i] == 'O')
    //             cnt_o++;
    //         else if (s[j][i] == 'X')
    //             cnt_h++;
    //         else if (s[j][i] == '+')
    //             cnt_p++;
    //     }
    //     if (cnt_o == 3)
    //     {
    //         cout << "O" << '\n';
    //         return;
    //     }
    //     else
    //         cnt_o = 0;
    //     if (cnt_h == 3)
    //     {
    //         cout << "X" << '\n';
    //         return;
    //     }
    //     else
    //         cnt_h = 0;
    //     if (cnt_p == 3)
    //     {
    //         cout << "+" << '\n';
    //         return;
    //     }
    //     else
    //         cnt_p = 0;
    // }
    // // Diagonal wise
    // for (int i = 0; i < 3; i++)
    // {
    //     if (s[i][i] == 'O')
    //         cnt_o++;
    //     else if (s[i][i] == 'X')
    //         cnt_h++;
    //     else if (s[i][i] == '+')
    //         cnt_p++;
    // }
    // if (cnt_o == 3)
    // {
    //     cout << "O" << '\n';
    //     return;
    // }
    // else
    //     cnt_o = 0;
    // if (cnt_h == 3)
    // {
    //     cout << "X" << '\n';
    //     return;
    // }
    // else
    //     cnt_h = 0;
    // if (cnt_p == 3)
    // {
    //     cout << "+" << '\n';
    //     return;
    // }
    // else
    //     cnt_p = 0;
    // // Reverse diagonal
    // for (int i = 0; i < 3; i++)
    // {
    //     if (s[i][2 - i] == 'O')
    //         cnt_o++;
    //     else if (s[i][2 - i] == 'X')
    //         cnt_h++;
    //     else if (s[i][2 - i] == '+')
    //         cnt_p++;
    // }
    // if (cnt_o == 3)
    // {
    //     cout << "O" << '\n';
    //     return;
    // }
    // else
    //     cnt_o = 0;
    // if (cnt_h == 3)
    // {
    //     cout << "X" << '\n';
    //     return;
    // }
    // else
    //     cnt_h = 0;
    // if (cnt_p == 3)
    // {
    //     cout << "+" << '\n';
    //     return;
    // }
    // else
    //     cnt_p = 0;
    // cout << "DRAW\n";
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