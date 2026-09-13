#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
int main()
{
    fast;
    int n, k;
    cin >> n >> k;
    int digit = to_string(n).length(), cnt = 0;

    for (int i = 0; i <= n; i++)
    {
        // int digit2 = to_string(i).length(), sum=0;
        int sum = 0, temp = i;
        while (temp)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == k)
            cnt++;
    }
    cout << cnt << endl;
}