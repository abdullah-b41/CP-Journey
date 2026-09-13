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
        int f_arr[26] = {};
        for (int i = 0; i < s.length(); i++)
        {
            f_arr[s[i] - 'a']++;
        }
        int max_index = 0;
        for (int i = 0; i < 26; i++)
        {
            if (f_arr[i] > 0 && i > max_index)
                max_index = i;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'a' + max_index)
                continue;
            cout << s[i];
        }
        cout << '\n';
    }
}