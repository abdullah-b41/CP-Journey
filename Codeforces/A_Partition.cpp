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
        cin >> i;

    int sumP = 0, sumN = 0;
    for (auto &i : v)
    {
        if (i > 0)
            sumP += i;
        else
            sumN += i;
    }
    cout << sumP - sumN << "\n";
    return 0;
}
