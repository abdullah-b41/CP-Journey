#include <bits/stdc++.h>
using namespace std;

#define N 1000001

// Solution 1 --> n root(n)
// void solve()
// {
//     int n;
//     cin >> n;
// int cnt = 0;

// for (int i = 1; i * i <= n; i++)
// {
//     if (n % i == 0)
//         cnt += 2;
//     if (i * i == n)
//         cnt--;
// }

// cout << cnt << '\n';
//     cout << divCnt[n] << '\n';
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Solution 2 --> n log(n) + t
    vector<int> divCnt(N);

    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
        {
            divCnt[j]++;
        }
    }

    int t = 1;
    cin >> t;
    while (t--)
    {
        // solve();
        int n;
        cin >> n;

        cout << divCnt[n] << '\n';
    }

    return 0;
}
