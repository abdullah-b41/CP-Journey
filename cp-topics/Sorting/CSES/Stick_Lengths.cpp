#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);

    for (auto &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end());

    int mid = (n % 2 == 0) ? v[n / 2] : v[(n - 1) / 2];
    long long sum = 0;
    for (auto &i : v)
        sum += abs(mid - i);
    cout << sum << "\n";

    return 0;
}
