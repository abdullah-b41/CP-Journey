#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    long long pts = 0;

    if (b >= 0)
    {
        pts = n * (a + b);
    }
    else
    {
        int seg = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
                seg++;
        }
        pts = n * a + (seg / 2 + 1) * b;
    }
    cout << pts << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
