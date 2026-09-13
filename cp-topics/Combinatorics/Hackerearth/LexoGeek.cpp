#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    cout << (next_permutation(s.begin(), s.end()) ? s : "no answer") << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
