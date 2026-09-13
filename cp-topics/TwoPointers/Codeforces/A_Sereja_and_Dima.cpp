#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> inp(n);
    for (auto &i : inp)
        cin >> i;

    long long sereja = 0, dima = 0;
    int left = 0, right = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            if (inp[left] > inp[right])
            {
                dima += inp[left];
                left++;
            }
            else
            {
                dima += inp[right];
                right--;
            }
        }
        else
        {
            if (inp[left] > inp[right])
            {
                sereja += inp[left];
                left++;
            }
            else
            {
                sereja += inp[right];
                right--;
            }
        }
    }
    cout << sereja << " " << dima << '\n';
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