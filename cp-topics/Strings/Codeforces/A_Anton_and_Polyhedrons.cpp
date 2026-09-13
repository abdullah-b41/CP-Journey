#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (auto &i : s)
        cin >> i;
    vector<string> options = {"Tetrahedron", "Cube", "Octahedron", "Dodecahedron", "Icosahedron"};
    long long ans = 0;
    for (auto j : s)
    {
        if (j == options[0])
            ans += 4;
        else if (j == options[1])
            ans += 6;
        else if (j == options[2])
            ans += 8;
        else if (j == options[3])
            ans += 12;
        else
            ans += 20;
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