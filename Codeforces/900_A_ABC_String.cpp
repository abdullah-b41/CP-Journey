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
    int x = s.length(), cnt = 0;
    char a = s[0];
    char b = '0', c = '0';
    cnt++;
    for (int i = 0; i < x; i++)
    {
        // clang-format off
        if (s[i] != a && b == '0' && c == '0')
        {
            // clang-format on
            b = s[i];
        }
        if (s[i] != a && b != '0')
            c = s[i];
    }
    int cnt1 = 0, cnt2 = 0, cnt_c = 0;
    for (int i = 0; i < x; i++)
    {
        if (s[i] == a)
            s[i] = '(';
        else if (s[i] == b)
            s[i] = ')';
        if (i == x - 1 && s[i] == c && cnt_c == 1)
            s[i] = ')';
        else if (s[i] == c)
        {
            s[i] == '(';
            cnt_c++;
        }
    }
    cout << s << '\n';
    for (int i = 0; i < x; i++)
    {
        if (s[i] == '(')
            cnt1++;
        else if (s[i] == ')')
            cnt2++;
    }
    if (cnt1 != cnt2)
        cout << "NO\n";
    else
        cout << "YES\n";
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