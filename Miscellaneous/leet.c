#include <stdio.h>

int main(void) 
{
    int m, n;
    scanf("%d %d", &m, &n);
    int sum[m];
    for (int i = 0; i < m; i++) 
    {
        sum[i] = 0;
        for (int j = 0; j < n; j++) 
        {
            int x;
            scanf("%d", &x);
            sum[i] += x;
        }
    }
    int max = sum[0];
    for (int i = 0; i < m; i++) 
    {
        if (sum[i] > max)
            max = sum[i];
    }
    printf("%d", max);
}