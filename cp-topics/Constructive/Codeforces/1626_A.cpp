#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end()); // as simple as it is
    cout << s << '\n';

    // int fa[26] = {}; //* my stupidity
    // char c[100] = {0};
    // for (int i = 0; i < s.length(); i++)
    //     fa[s[i] - 'a']++;

    // int cnt = 0;
    // for (int i = 0, k = 0; i < 26; i++)
    //     if (fa[i] == 2)
    //     {
    //         cnt++;
    //         c[k + 1] = c[k] = i + 'a';
    //         k += 2;
    //     }

    // if (cnt <= 1)
    // {
    //     cout << s << '\n';
    //     return;
    // }

    // for (int i = 0; c[i] != 0; i++)
    // {
    //     cout << c[i];
    //     fa[c[i] - 'a']--;
    // }

    // for (int i = 0, k = 0; i < 26; i++)
    //     if (fa[i] > 0)
    //         cout << (char)(i + 'a');

    // cout << '\n';
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