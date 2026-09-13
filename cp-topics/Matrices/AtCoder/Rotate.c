#include <stdio.h>

int main()
{
    int n, arr[100][100]={0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         int temp = 0;
    //         if (i == 0)
    //         {
    //             if (j == 0)
    //             {
    //                 temp = arr[i][j];
    //                 arr[i][j] = arr[i + 1][j];
    //                 arr[i][j + 1] = temp;
                    
    //             }
    //         }
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}