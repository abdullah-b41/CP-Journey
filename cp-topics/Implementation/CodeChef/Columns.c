#include <stdio.h>

int main()
{
    int n;
    long long x;
    scanf("%lld%d", &x, &n);
    long long arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lld", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j][i] == x)
                cnt++;
        }
        if (cnt)
            printf("YES\n");
        else
            printf("NO\n");
    }
}