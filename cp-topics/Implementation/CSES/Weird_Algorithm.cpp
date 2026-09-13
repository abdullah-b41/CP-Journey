#include <bits/stdc++.h>
using namespace std;

long long weirdAlgo(long long n)
{
    if (n == 1)
        return 1;
    if (n & 1)
        return 3 * n + 1;
    else
        return n / 2;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    cout << n << ' ';
    while (n != 1)
    {
        n = weirdAlgo(n);
        cout << n << ' ';
    }
    cout << '\n';

    return 0;
}