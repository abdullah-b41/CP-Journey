#include <bits/stdc++.h>
#include <vector>
using namespace std;

int unique(vector<int> v, int n)
{
    int unq = 1;
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++)
    {
        if (v[i] != v[i - 1])
            unq++;
    }
    return unq;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int x = unique(v, n);
    cout << x << '\n';
    return 0;
}
