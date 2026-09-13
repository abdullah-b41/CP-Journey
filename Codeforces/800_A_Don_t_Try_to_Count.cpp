#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int a, b, result = -1;
    cin >> a >> b;
    string s, t;
    cin >> s >> t;
    for (int i = 0; i < log2(b) + 1; i++) //* my approach
    {
        // if (s.length() >= t.length() && result == -1) //* mine
        // {
        //     for (int j = 0; j < s.length(); j++)
        //     {
        //         if (s.substr(j, b) == t)
        //         {
        //             result = i;
        //             break;
        //         }
        //     }
        // }

        //* these built in functions are cool

        if (s.find(t) != string::npos) //* find() returns index of first match.
        {
            result = i;
            break;
        }
        s += s;
    }
    cout << result << '\n';

    //* Chatgpt
    // string cur = s;
    // int cnt = 0;

    // while (cur.length() < t.length())
    // {
    //     cur += s;
    //     cnt++;
    // }

    // // Try a few extra times to cover overlaps
    // for (int i = 0; i <= 2; i++)
    // {
    //     if (cur.find(t) != string::npos)
    //     {
    //         cout << cnt + i << '\n';
    //         return;
    //     }
    //     cur += s;
    // }

    // cout << -1 << '\n';
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