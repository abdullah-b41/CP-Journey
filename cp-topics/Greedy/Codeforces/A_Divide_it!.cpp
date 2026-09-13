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
        long long n;
        cin >> n;
        long long cnt = 0;
        bool flag = true;
        while (n != 1)
        {
            if (n % 2 == 0)
                n = n / 2;
            else if (n % 3 == 0)
                n = (n * 2) / 3;
            else if (n % 5 == 0)
                n = (n * 4) / 5;
            else
            {
                cout << "-1\n";
                flag = false;
                break;
            }
            cnt++;
        }
        if (!flag)
            continue;
        cout << cnt << "\n";
    }
    return 0;
}
