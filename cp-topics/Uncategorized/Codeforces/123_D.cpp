#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
int main()
{
    fast;
    string s;
    cin >> s;
    int n = s.length();
    cout << char(toupper(s[0]));
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 's')
            cout << "$";
        else if (s[i] == 'i')
            cout << "!";
        else if (s[i] == 'o')
            cout << "()";
        else if (i != 0)
            cout << s[i];
    }
    cout << '.' << "\n";
}