#include <stdio.h>

int main()
{
    int n, m, a[100][100];
    scanf("%d %d", &n, &m);
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = num;
            num++;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}