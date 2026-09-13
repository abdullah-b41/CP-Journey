// #include <bits/stdc++.h>
// using namespace std;

// #define fast                     \
//     ios::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define ll long long

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     bool same = true;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//         if (i > 0 && v[i] != v[i - 1])
//             same = false;
//     }
//     if (same)
//     {
//         cout << "NO\n";
//         return;
//     }
//     else
//     {
//         cout << "YES\n";
//         int xi = 0, xf = 0;
//         for (int i = 0; i + 1 < n; i++)
//         {
//             int range1 = 0;
//             int range2 = *max_element(v.begin() + i + 1, v.end()) - *min_element(v.begin() + i + 1, v.end());
//             if (range1 != range2)
//                 xi = i + 1, xf = n - 1;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (xi != xf)
//             {
//                 if (i >= xi && i <= xf)
//                     cout << "R";
//                 else
//                     cout << "B";
//             }
//             else
//             {
//                 if (i % 2 == 0)
//                     cout << "R";
//                 else
//                     cout << "B";
//             }
//         }
//         cout << '\n';
//     }
// }

// int main()
// {
//     fast;

//     int t = 1;
//     cin >> t;
//     while (t--)
//         solve();

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bool allSame = true;
    for (int i = 1; i < n; i++)
        if (a[i] != a[0])
            allSame = false;

    if (allSame)
    {
        cout << "NO\n";
        return;
    }

    int idx = -1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            idx = i;
            break;
        }
    }

    // fallback (if no duplicates exist)
    if (idx == -1)
    {
        cout << "YES\n";
        cout << string(1, 'B') + string(n - 1, 'R') << "\n";
        return;
    }

    cout << "YES\n";

    for (int i = 0; i < n; i++)
    {
        if (i == idx)
            cout << 'B';
        else
            cout << 'R';
    }
    cout << '\n';
}

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
        solve();
}