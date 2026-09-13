#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ans = 2e9;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ans = min(ans, abs(0 - x));
    }
    cout << ans << '\n';
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