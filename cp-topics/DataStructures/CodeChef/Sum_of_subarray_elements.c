#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int r1, c1, r2, c2, sum = 0;
    scanf("%d%d%d%d", &r1, &c1, &r2, &c2);
    for (int i = r1 - 1; i < r2; i++)
    {
        for (int j = c1 - 1; j < c2; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("%d", sum);
}