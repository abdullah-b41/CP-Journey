#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans(n, '0');
        ans[0] = '1';

        for (int i = 1; i < n; ++i)
        {
            if (s[i] == '0')
            {
                if (s[i - 1] == '1' && ans[i - 1] == '1')
                    ans[i] = '1';
                else if ((s[i - 1] == '0' && ans[i - 1] == '1') || (s[i - 1] == '1' && ans[i - 1] == '0'))
                    ans[i] = '0';
                else if (s[i - 1] == ans[i - 1])
                    ans[i] = '1';
            }
            else
            {
                if (s[i - 1] == '1' && ans[i - 1] == '1')
                    ans[i] = '0';
                else if ((s[i - 1] == '0' && ans[i - 1] == '1') || (s[i - 1] == '1' && ans[i - 1] == '0'))
                    ans[i] = '1';
                else if (s[i - 1] == ans[i - 1])
                    ans[i] = '1';
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
