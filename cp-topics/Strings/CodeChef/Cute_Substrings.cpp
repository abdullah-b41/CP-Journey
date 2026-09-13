#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int best = 0;
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            if (s[i] == 'u' || s[i] == 'o')
            {
                for (int j = i; j < n; j++)
                {
                    if ((j - i) % 2 == 0)
                    {
                        if (s[j] == 'u' || s[j] == 'o')
                        {
                            cnt++;
                            if (cnt > best)
                                best = cnt;
                        }
                        else
                            break;
                    }
                    if ((j - i) % 2 == 1)
                    {
                        if (s[j] == 'w')
                            cnt++;
                        else
                            break;
                    }
                }
            }
        }
        cout << best << '\n';
    }
}
