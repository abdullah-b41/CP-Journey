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
        int s, n;
        cin >> s >> n;
        string p;
        cin >> p;
        int cnt = 0;
        for (int i = 0; i < s; i++)
        {
            if (p[i] == 'B')
            {
                for (int j = i; j < i + n && j <= s - 1; j++)
                {
                    p[j] = 'W';
                }
                cnt++;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}
