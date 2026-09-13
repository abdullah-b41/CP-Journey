#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    set<char> st;

    int n = s.length();
    for (int i = 1; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            st.insert(s[i]);
    }
    cout << st.size() << '\n';
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