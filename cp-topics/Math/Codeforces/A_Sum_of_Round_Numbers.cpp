#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int dig = log10(n) + 1;
    int k = 0;
    vector<int> ans;
    for (int i = 0; i < dig; i++)
    {
        ans.push_back(n % 10 * pow(10, i));
        if (n % 10 * pow(10, i) != 0)
            k++;
        n /= 10;
    }

    cout << k << '\n';
    for (auto i : ans)
        if (i)
            cout << i << " ";
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}