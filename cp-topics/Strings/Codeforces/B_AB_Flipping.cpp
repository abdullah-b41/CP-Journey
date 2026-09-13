#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0, idx = 0;
    vector<bool> blackList(n, false);

    for (int j = 0; j + 1 < n;)
    {
        if (s[j] == 'A' && s[j + 1] == 'B')
        {
            if (blackList[j] == false)
            {
                swap(s[j], s[j + 1]);
                blackList[j] = true;
                cnt++;
                j--;
            }
            else
                j++;
        }
        else
            j++;
    }

    cout << cnt << '\n';
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
