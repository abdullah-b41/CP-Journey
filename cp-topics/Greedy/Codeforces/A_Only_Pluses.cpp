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
        int a, b, c;
        cin >> a >> b >> c;
        for (int i = 0; i < 5; i++)
        {
            if (a < b)
            {
                if (a < c)
                    a++;
                else
                    c++;
            }
            else
            {
                if (b < c)
                    b++;
                else
                    c++;
            }
        }
        cout << a * b * c << '\n';
    }
    return 0;
}
