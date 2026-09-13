#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int n = s.size();
    int ab = 0, ba = 0;
    for (int i = 0; i < n; i++)
    {
        if (ab == 0)
        {
            if (s[i] == 'A' && s[i + 1] == 'B')
            {
                ab++;
                i++;
                continue;
            }
        }
        if (ba == 0)
        {
            if (s[i] == 'B' && s[i + 1] == 'A')
            {
                ba++;
                i++;
            }
        }
        // cout << ab << ' ' << ba << "\n";
    }

    if (ab > 0 && ba > 0)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
}