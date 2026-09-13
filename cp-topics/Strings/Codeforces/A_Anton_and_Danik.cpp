#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int ant = 0,dan=0;
    for (int i = 0; i < n; i++)
        s[i] == 'A' ? ant++ : dan++;
    if (ant > dan)
        cout << "Anton";
    else if (ant == dan)
        cout << "Friendship";
    else
        cout << "Danik";
    cout << '\n';
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