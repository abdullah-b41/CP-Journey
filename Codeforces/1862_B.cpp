#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int n, m = 0;
    cin >> n;
    m = n;
    vector<int> v(n);
    vector<int> v2;

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
    {
        v2.push_back(v[i]);
        if (i + 1 < n && v[i + 1] < v[i]) // && --> left to right
        {
            v2.push_back(v[i + 1]);
            m++;
        }
    }
    cout << m << '\n';
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << ' ';
    }
    cout << '\n';
}

int main()
{
    fast;

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}