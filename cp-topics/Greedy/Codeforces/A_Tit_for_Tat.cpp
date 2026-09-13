#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;

        for (int i = 0; i < n - 1 && k > 0; i++)
        {
            int take = min(v[i], k);
            v[i] -= take;
            v[n - 1] += take;
            k -= take;
        }

        for (auto &i : v)
            cout << i << ' ';
        cout << "\n";
    }
    return 0;
}
