#include <stdio.h> //! Parini >.<

int main()
{
    int a[9][9] = {};
    int check = 1; // assuming true
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
            scanf("%d", &a[i][j]);
    }

    for (int i = 0; i < 9; i++) // check rows
    {
        int r_fre[10] = {0};
        for (int j = 0; j < 9; j++)
            r_fre[a[i][j]]++;
        for (int j = 1; j < 10; j++)
        {
            if (r_fre[j] != 1)
                check = 0;
        }
    }

    for (int j = 0; j < 9; j++) // check columns
    {
        int c_fre[10] = {0};
        for (int i = 0; i < 9; i++)
            c_fre[a[i][j]]++;
        for (int i = 1; i < 10; i++)
        {
            if (c_fre[i] != 1)
                check = 0;
        }
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (i % 3 == 0 && j % 3 == 0)
            {
                int g_fre[10] = {0};
                for (int k = i; k < i + 3; k++)
                {
                    for (int l = j; l < j + 3; l++)
                        g_fre[a[k][l]]++;
                }
                for (int k = 1; k < 10; k++)
                {
                    if (g_fre[k] != 1)
                        check = 0;
                }
            }
        }
    }
    if (check)
        printf("Yes\n");
    else
        printf("No\n");
}
