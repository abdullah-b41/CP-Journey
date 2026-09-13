#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char point[10][11];
        int total = 0;
        for (int j = 0; j < 10; j++)
        {
            scanf("%s", point[j]);
        }

        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (point[j][k] == 'X')
                {
                    // if (j == 0 || j == 9) //* gajakhuri
                    // {
                    //     total += 1;
                    // }
                    // else if (k == 0 || k == 9)
                    // {
                    //     total += 1;
                    // }
                    // else if ((j == 1 || j == 8) && (k > 0 && k < 9))
                    // {
                    //     total += 2;
                    // }
                    // else if ((j >= 2 || j <= 5 || j == 7) && (k == 1 || k == 8))
                    // {
                    //     total += 2;
                    // }
                    // else if ((j == 2 || j == 7) && (k > 1 && k < 8))
                    // {
                    //     total += 3;
                    // }
                    // else if ((j >= 3 || j <= 6) && (k == 2 || k == 7))
                    // {
                    //     total += 3;
                    // }
                    // else if ((j == 3 || j == 6) && (k > 2 && k < 7))
                    // {
                    //     total += 4;
                    // }
                    // else if ((j >= 4 || j <= 5) && (k == 3 || k == 6))
                    // {
                    //     total += 4;
                    // }
                    // else if ((j == 4 || j == 5) && (k == 4 || k == 5))
                    // {
                    //     total += 5;
                    // }
                    //! 
                    int x = j + 1; //* dis from left
                    int x2 = 10 - j; //* dis from right
                    int y = k + 1; //* dis from up
                    int y2 = 10 - k; //* dis from below
                    int min = x;
                    if (x2 < min)
                        min = x2;
                    if (y < min)
                        min = y;
                    if (y2 < min)
                        min = y2;
                    total += min;
                }
            }
        }
        printf("%d\n", total);
    }
}