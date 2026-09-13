#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char lat[3][4];
        int a = 0, b = 0, c = 0;

        for (int j = 0; j < 3; j++)
        {
            scanf("%s", lat[j]);

            for (int k = 0; k < 3; k++)
            {
                if (lat[j][k] == 'A') //* checking A in 3*3 grid
                {
                    a++;
                }
                else if (lat[j][k] == 'B')
                {
                    b++;
                }
                else if (lat[j][k] == 'C')
                {
                    c++;
                }
            }
        }
        if (a < 3) //* in a full grid there should be 3 of them
        {
            printf("A\n");
        }
        else if (b < 3)
        {
            printf("B\n");
        }
        else if (c < 3)
        {
            printf("C\n");
        }

        // for (int k = 0; k < 3; k++)
        // {
        //     scanf("%s", lat[k]);

        //     for (int j = 0; j < 3; j++)
        //     {
        //         if (lat[k][j] == 'A')
        //         {
        //             a++;
        //         }
        //         else if (lat[k][j] == 'B')
        //         {
        //             b++;
        //         }
        //         else if (lat[k][j] == 'C')
        //         {
        //             c++;
        //         }
        //     }
        // }
        // if (a < 3)
        // {
        //     printf("A\n");
        // }
        // else if (b < 3)
        // {
        //     printf("B\n");
        // }
        // else
        // {
        //     printf("C\n");
        // }

        // for (int j = 0; j < 3; j++)
        // {
        //     int a = 0, b = 0, c = 0;
        //     scanf("%s", lat[j]);

        //     for (int k = 0; k < 3; k++)
        //     {
        //         if (lat[j][k] == 'A') //* checking in a grid
        //         {
        //             a++;
        //         }
        //         else if (lat[j][k] == 'B')
        //         {
        //             b++;
        //         }
        //         else if (lat[j][k] == 'C')
        //         {
        //             c++;
        //         }
        //     }
        //     if (a == 0) //* in a single row there should be 1 of them
        //     {
        //         printf("A\n");
        //         break;
        //     }
        //     else if (b == 0)
        //     {
        //         printf("B\n");
        //         break;
        //     }
        //     else if (c == 0)
        //     {
        //         printf("C\n");
        //         break;
        //     }
        // }
    }
    return 0;
}