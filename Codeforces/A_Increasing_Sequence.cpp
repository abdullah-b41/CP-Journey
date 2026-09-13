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
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;

        vector<int> b;
        for (int i = 0, k = 1; i < n;)
        {
            if (v[i] != k)
            {
                b.push_back(k);
                k++;
                i++;
            }
            else
            {
                k++;
            }
        }
        // for (auto &i : b)
        //     cout << i << ' ';
        // cout << '\n';
        cout << b[n - 1] << '\n';
    }
}
