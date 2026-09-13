#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
int main()
{
    fast
    string s;
    cin >> s;
    int arr[26] = {0}, n = s.length();

    for (int i = 0; i < n; i++)
    {
        int index = s[i] - 'a';
        arr[index]++;
    }

    int a = *max_element(arr, arr + 26);

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == a)
            arr[i] = 0;
    }

    for(int i=0;i<n;i++)
    {
        if(arr[s[i]-'a']>0)
        {
            cout<<s[i];
            arr[s[i]-'a']--;
        }
    }
    cout<<endl;
}