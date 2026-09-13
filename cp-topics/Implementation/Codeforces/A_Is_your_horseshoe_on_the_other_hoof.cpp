#include <bits/stdc++.h>
using namespace std;

void solve()
{
    set<int> unq;
    int x;
    for (int i = 0; i < 4; i++)
    {
        cin>>x;
        unq.insert(x);
    }
    cout << 4 - unq.size() << '\n';
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