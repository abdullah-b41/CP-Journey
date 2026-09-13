#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, a[101] = {}, check[101] = {}, len = 0;
        cin >> n >> k;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != k)
            {
                check[len] = a[i];
                len++;
            }
        }

        int flag = 1;
        for (int i = 0; i < len / 2; i++)
        {
            if (check[i] != check[len - 1 - i])
                flag = 0;
        }

        if (flag)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
}
