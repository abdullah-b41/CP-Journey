#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int diff = min(b, d) - max(a, c);
    if (diff > 0)
        cout << diff << '\n';
    else
        cout << "0" << endl;
}