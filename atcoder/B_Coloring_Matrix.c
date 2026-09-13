#include <stdio.h> //! parini

int main()
{
    int n, a[101][101] = {0}, b[101][101] = {0}, temp[101][101] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int k = 0; k < 4; k++)
    {
        int flag = 1; // be careful to place accordingly

        // // Step 1: Transpose
        // for (int i = 0; i < n; i++) // Claude
        //     for (int j = i + 1; j < n; j++)
        //     {
        //         int temp = a[i][j];
        //         a[i][j] = a[j][i];
        //         a[j][i] = temp;
        //     }

        // // Step 2: Reverse each row
        // for (int i = 0; i < n; i++)
        //     for (int j = 0; j < n / 2; j++)
        //     {
        //         int temp = a[i][j];
        //         a[i][j] = a[i][n - 1 - j];
        //         a[i][n - 1 - j] = temp;
        //     }

        // for (int i = 0; i < n; i++) // mine, find the fallacy
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         int x=a[i][j];
        //         a[i][j] = a[n - 1 - j][i];
        //         a[n - 1 - j][i] = x;
        //     }
        // }

        for (int i = 0; i < n; i++) // CPS
        {
            for (int j = 0; j < n; j++)
            {
                temp[i][j] = a[n - 1 - j][i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j] = temp[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == 1 && b[i][j] == 0)
                    flag = 0;
            }
        }

        if (flag)
        {
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
}