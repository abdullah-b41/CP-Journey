#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    set<char> st;
    for (auto &i : s)
        st.insert(tolower(i));
    cout << (st.size() == 26 ? "YES\n" : "NO\n");
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