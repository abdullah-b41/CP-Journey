#include <bits/stdc++.h> //* parini
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
int main()
{
    fast;
    int k;
    cin >> k;
    int a[101] = {0};
    int cnt[1001] = {0};
    for (auto &i : a)
    {
        cin >> i;
    }

    for (int i = 2; i <= 1000; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (a[j] % i == 0)
                cnt[i]++;
        }
    }

    cout << max_element(cnt, cnt + 1001) - cnt << "\n";
}