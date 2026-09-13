#include <bits/stdc++.h>
#include <cctype>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i] <= 'Z')
    //         s[i] += 32;
    // if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
    // {
    //     s.erase(s.begin() + i);
    //     i--;
    //     n--;
    // }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         s.insert(s.begin() + i, '.');
    //         n++;
    //     }
    // }
    for (auto &it : s)
    {
        it = tolower(it);
        if (it == 'a' || it == 'e' || it == 'i' || it == 'o' || it == 'u' || it == 'y')
            continue;
        cout << '.' << it;
    }
    cout << endl;
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
