#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int room = 0;
    while(n--)
    {
        int p,q;
        cin>>p>>q;
        q - p > 1 ? room++ : room;
    }
    cout << room << '\n';
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