#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v(20);

int stonePile(int idx, int left, int right)
{
    if (idx == n)
        return abs(left - right);

    int leftDiff = stonePile(idx + 1, left + v[idx], right);
    int rightDiff = stonePile(idx + 1, left, right + v[idx]);

    return min(leftDiff, rightDiff);
}

void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << stonePile(0, 0, 0) << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}