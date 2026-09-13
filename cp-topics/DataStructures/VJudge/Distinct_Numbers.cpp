#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    set<int>st;
    while(n--)
    {
        int x;
        cin>>x;
        st.insert(x);
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