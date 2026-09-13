#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> X(3, -9);
    int index = 0;

    for (int k = 0; k < 100; k++)
    {
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (x > a[i])
                x = 1;
            else if (x < a[i])
                x = -1;
            else
                x = 0;
        }
        if (find(X.begin(), X.end(), x) == X.end())
        {
            X[index] = x;
            index++;
        }
        shuffle(a.begin(), a.end(), rng);
    }

    sort(X.begin(), X.end());
    for (int i = 0; i < X.size(); i++)
    {
        if (X[i] == 0 || X[i] == 1 || X[i] == -1)
            cout << X[i] << ' ';
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
