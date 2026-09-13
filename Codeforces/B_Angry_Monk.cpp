#include <algorithm>
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
        vector<int> a(k);

        long long cnt = 0;
        for (auto &i : a)
        {
            cin >> i;
            cnt += 2 * i - 1;
        }

        // cout << 2 * (n - *max_element(a.begin(), a.end())) - (k - 1) << "\n";
        cout << cnt - (2 * *max_element(a.begin(), a.end()) - 1) << "\n";
    }

    return 0;
}
