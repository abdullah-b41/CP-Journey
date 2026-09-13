#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> robo(n);
    vector<int> bionic(n);
    for (auto &i : robo)
        cin >> i;
    for (auto &i : bionic)
        cin >> i;

    bool allSame = true;
    for (int i = 0; i < n; i++)
        if (robo[i] != bionic[i])
        {
            allSame = false;
            break;
        }

    if (allSame)
    {
        cout << "-1\n";
        return;
    }

    long long pt1 = 0, pt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (bionic[i])
        {
            if (robo[i])
            {
                pt1++;
                pt2++;
            }
            else
                pt2++;
        }
    }

    int need = pt2 - pt1 + 1, place = 0;
    for (int i = 0; i < n; i++)
    {
        if (robo[i] && !bionic[i])
            place++;
    }

    if (place == 0)
    {
        cout << "-1\n";
        return;
    }

    int value = (need + place - 1) / place;
    cout << value << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}
