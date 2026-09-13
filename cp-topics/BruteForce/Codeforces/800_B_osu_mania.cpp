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
    // int arr[500] = {}, index = 0;
    // for (int i = 0; i < n; i++)
    // {
    // string s;
    // cin >> s;
    // for (int j = 0; j < 4; j++)
    // {
    //     if (s[j] == '#')
    //         arr[index++] = j + 1;
    // }
    //}
    // for (int j = n - 1; j >= 0; j--)
    //     cout << arr[j] << ' ';
    // cout << '\n';
    vector<string> s(500);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < 4; j++)
        {
            if (s[i][j] == '#')
                cout << j + 1 << ' ';
        }
    }
    cout << '\n';
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