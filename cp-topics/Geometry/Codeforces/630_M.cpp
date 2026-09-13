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
        int div = n / 5, extra = n % 5;
        while (div--)
        {
            cout << "a";
        }
        if (extra)
        {
            cout << "a";
            extra--;
        }
        div = n / 5;
        while (div--)
        {
            cout << "e";
        }
        if (extra)
        {
            cout << "e";
            extra--;
        }
        div = n / 5;
        while (div--)
        {
            cout << "i";
        }
        if (extra)
        {
            cout << "i";
            extra--;
        }
        div = n / 5;
        while (div--)
        {
            cout << "o";
        }
        if (extra)
        {
            cout << "o";
            extra--;
        }
        div = n / 5;
        while (div--)
        {
            cout << "u";
        }
        if (extra)
        {
            cout << "u";
            extra--;
        }
        cout << '\n';
    }

    return 0;
}