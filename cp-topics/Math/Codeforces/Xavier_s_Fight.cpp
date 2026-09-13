#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    double sum = 0;
    for (int i = 1; i <= t; i++)
    {
        long long n;
        cin >> n;
        sum += i * n * 3;
    }
    cout << fixed << setprecision(3) << ceil(sqrt(sum)) << '\n';

    return 0;
}