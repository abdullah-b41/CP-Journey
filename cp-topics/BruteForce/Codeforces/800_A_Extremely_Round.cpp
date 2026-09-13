#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

int main()
{
    fast;

    ll arr[1000] = {}, index = 0;
    for (ll i = 0; i <= 999999; i++)
    {
        ll tmp = i, check = 0;
        while (tmp > 0)
        {
            if (tmp % 10 != 0)
                check++;
            tmp /= 10;
        }
        if (check == 1)
        {
            arr[index++] = i;
        }
    }

    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        for (int i = 0; i <= index; i++)
        {
            if (arr[i] > n)
            {
                cout << i << '\n';
                break;
            }
            if (i == index - 1)
                cout << index << '\n';
        }
    }

    return 0;
}