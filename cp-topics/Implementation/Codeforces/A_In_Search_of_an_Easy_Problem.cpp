#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x;
    cin>>n;
    int ttl = 0;
    while(n--)
    {
        cin>>x;
        ttl += x;
    }
    cout << (ttl > 0 ? "HARD\n" : "EASY\n");
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