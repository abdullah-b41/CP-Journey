#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    if (arr[0] == arr[1] && arr[1] == arr[2])
    {
        cout << "0\n";
        return;
    }
    if (arr[0] + arr[1] > arr[2] && arr[0] + arr[2] > arr[1] && arr[2] + arr[1] > arr[0])
    {
        cout << "0\n";
        return;
    }
    cout << arr[2] - arr[0] - arr[1] + 1 << '\n';
}

int main()
{
    fast;

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}