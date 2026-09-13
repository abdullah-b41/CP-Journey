#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    set<int> st;
    int x, p;
    cin >> p;
    while (p--)
    {
        cin >> x;
        st.insert(x);
    }
    cin >> p;
    while (p--)
    {
        cin >> x;
        st.insert(x);
    }
    cout << (st.size() == n ? "I become the guy.\n" : "Oh, my keyboard!\n");
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