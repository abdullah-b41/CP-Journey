#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    long long sum = 0;
    for (auto i : s)
        sum += i - '0';
    cout << (sum % 9 ? "No\n" : "Yes\n");
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