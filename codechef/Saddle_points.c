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

    int cmax[m], rmin[n];
    for (int i = 0; i < n; i++)
    {
        int temp = 100000;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] < temp)
                temp = arr[i][j];
        }
        rmin[i] = temp;
    }

    for (int i = 0; i < m; i++)
    {
        int temp = -100000;
        for (int j = 0; j < n; j++)
        {
            if (arr[j][i] > temp)
                temp = arr[j][i];
        }
        cmax[i] = temp;
    }

    int cnt = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", rmin[i]);
    // }

    // printf("\n");

    // for (int i = 0; i < m; i++)
    // {
    //     printf("%d ", cmax[i]);
    // }

    // printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (cmax[j] == rmin[i])
                cnt++;
        }
    }

    printf("%d", cnt);
}