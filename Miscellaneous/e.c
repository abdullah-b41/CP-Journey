#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n], ar[m];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int j = 0; j < m; j++)
    {
        scanf("%d", &ar[j]);
    }
    int sum = 0;
    for(int k = 0; k < m; k++)
    {
        sum += arr[ar[k]];
    }
    printf("%d", sum);
}