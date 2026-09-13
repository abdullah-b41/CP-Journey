#include <bits/stdc++.h> //! parini
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int cnt = 0;
        int diagonal = n;
        int track = 0;
        while (k > 0)
        {
            if (diagonal == n)
            {
                k -= diagonal;
                cnt++;
                diagonal--;
            }
            else
            {
                if (track == 2)
                {
                    diagonal--;
                    track = 0;
                    continue;
                }
                k -= diagonal;
                cnt++;
                track++;
            }
        }
        cout << cnt << "\n";
    }
}