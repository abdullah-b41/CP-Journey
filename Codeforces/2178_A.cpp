#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        if (s[0] == 'Y' || s[0] == 'y')
            cnt++;
        if (s[1] == 'E' || s[1] == 'e')
            cnt++;
        if (s[2] == 'S' || s[2] == 's')
            cnt++;
        if (cnt == 3)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}