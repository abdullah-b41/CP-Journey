#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    vector<bool> called(n + 1, false);

    for (int i = 1; i < n + 1; i++)
    {
        cin >> v[i];
        if (called[i] == false)
            called[v[i]] = true;
    }

    int notCalled = 0;

    for (int i = 1; i < n + 1; i++)
        if (called[i] == false)
            notCalled++;

    cout << notCalled << '\n';

    for (int i = 1; i < n + 1; i++)
        if (called[i] == false)
            cout << i << ' ';

    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}
