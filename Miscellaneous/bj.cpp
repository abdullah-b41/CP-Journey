#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
int main()
{
    fast;
    int k;
    string s;
    cin >> k;
    cin.ignore();
    getline(cin, s);

    int shift = 26 - k;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (isupper(s[i]))
        {
            s[i] = ((s[i] - 'A' + shift) % 26 + 'A');
        }
        else if (islower(s[i]))
        {
            s[i] = ((s[i] - 'a' + shift) % 26 + 'a');
        }
        else
        {
            s[i] = s[i];
        }
    }
    cout << s << endl;
}