#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length(), arr[26] = {};
    for (int i = 0; i < n; i++)
        arr[s[i] - 'A']++;
    if (n % 2 == 0)
    {
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] % 2 == 1)
            {
                cout << "NO SOLUTION";
                return 0;
            }
        }
        string ans = s;
        for (int i = 0, k = 0; i < 26;)
        {
            if (arr[i] > 0)
            {
                ans[k] = i + 'A';
                ans[n - 1 - k] = i + 'A';
                arr[i] -= 2;
                k++;
            }
            else
                i++;
        }
        cout << ans << '\n';
    }
    else
    {
        int cnt = 0;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] % 2 == 1)
                cnt++;
        }
        if (cnt > 1)
        {
            cout << "NO SOLUTION";
            return 0;
        }
        else
        {
            string ans = s;
            for (int i = 0, k = 0; i < 26;)
            {
                if (arr[i] > 0)
                {
                    if (arr[i] > 1)
                    {
                        ans[k] = i + 'A';
                        ans[n - 1 - k] = i + 'A';
                        arr[i] -= 2;
                        k++;
                    }
                    else
                    {
                        ans[(n + 1) / 2 - 1] = i + 'A';
                        arr[i]--;
                    }
                }
                else
                    i++;
            }
            cout << ans << '\n';
        }
    }
}