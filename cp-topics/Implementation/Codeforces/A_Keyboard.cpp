#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    char shift;
    string s;
    cin >> shift >> s;

    vector<char> v = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};

    for (auto i : s)
    {
        int idx = find(v.begin(), v.end(), i) - v.begin();
        if (shift == 'R')
        {
            idx--;
            cout << v[idx];
        }
        else
        {
            idx++;
            cout << v[idx];
        }
    }
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