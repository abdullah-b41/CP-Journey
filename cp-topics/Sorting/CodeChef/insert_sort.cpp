#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

int main()
{
    fast;
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
        cin >> num[i];

    // Insert sort
    for (int i = 1; i < n; i++)
    {
        // let i = 5;
        int x = num[i]; // x = num[5]
        int j = i - 1;  // previous index, j = 4;

        while (j >= 0 && num[j] > x) // previous > current ? 9 > 4?
        {
            num[j + 1] = num[j]; // num[5] = num[4]
            j--;                 // j = 3.
        }
        num[j + 1] = x; // num[4] = num[5];

        // line 30 puts starting item at last place of sorting
    }

    for (int i = 0; i < n; i++)
        cout << num[i] << ' ';
    return 0;
}