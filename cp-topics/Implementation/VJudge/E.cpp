#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<bool> v(n + 1, false);
    while (q--)
    {
        int i;
        char g;
        cin >> i >> g;
        if (g == 'M' and v[i] == false)
        {
            v[i] = true;
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }

    return 0;
}