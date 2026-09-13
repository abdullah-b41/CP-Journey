#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int alpha, k;
    cin >> alpha >> k;
    string s(alpha, ' ');
    for (int i = 0; i < alpha; i++)
    {
        s[i] = 'A' + i;
    }
    cout << s << '\n';
    k--;
    while (next_permutation(s.begin(), s.end()) && k--)
    {
        cout << s << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ":" << '\n';
        solve();
    }

    return 0;
}
