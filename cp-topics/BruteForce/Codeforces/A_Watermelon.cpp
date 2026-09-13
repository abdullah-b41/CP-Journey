#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    cout<<(n>2&&n%2==0?"YES\n":"NO\n");
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