#include <stdio.h>

int main()
{
    int n, a[100][100] = {}, b[100][100] = {};
    scanf("%d", &n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 1)
                cnt++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    int flag = 1;
    for (int k = 0; k < n; k++)
    {
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                int temp = a[i][j];
                a[i][j] = a[n - j][i];
                a[n - j][i] = temp;
            }
        }
    }
}