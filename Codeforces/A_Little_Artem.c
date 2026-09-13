#include <stdio.h>
#include <string.h>

int main() //* "If there are several solutions, output any of them." just fill B=W+1.
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        for (int i = 0; i < n; i++) //* B=2 and W=1 so B=W+1 for any n,m
        {
            for (int j = 0; j < m; j++)
            {
                if (i == 0 && j == 0)
                    printf("W");
                else
                    printf("B");
            }
            printf("\n");
        }
        //     int total = n * m, wht = 0, blk = 0; //* bruteforce
        //     if (total % 2 == 1)                  //* WBWB....
        //     {                                    //* BWBW....
        //         wht = (total - 1) / 2;           //* WBWB....
        //         blk = (total + 1) / 2;           //* ........
        //     }
        //     else
        //     {
        //         wht = total / 2 - 1;
        //         blk = total / 2 + 1;
        //     }
        //     for (int i = 0; i < n; i++)
        //     {
        //         for (int j = 0; j < m; j++)
        //         {
        //             if (i % 2 == 0)
        //             {
        //                 if (blk != 0 && wht != 0)
        //                 {
        //                     if (j % 2 == 0)
        //                     {
        //                         printf("B");
        //                         blk--;
        //                     }
        //                     else if (j % 2 == 1)
        //                     {
        //                         printf("W");
        //                         wht--;
        //                     }
        //                 }
        //                 else if (wht == 0)
        //                     printf("B");
        //                 else if (blk == 0)
        //                     printf("W");
        //             }
        //             else
        //             {
        //                 if (blk != 0 && wht != 0)
        //                 {
        //                     if (j % 2 == 1)
        //                     {
        //                         printf("B");
        //                         blk--;
        //                     }
        //                     else if (j % 2 == 0)
        //                     {
        //                         printf("W");
        //                         wht--;
        //                     }
        //                 }
        //                 else if (wht == 0)
        //                     printf("B");
        //                 else if (blk == 0)
        //                     printf("W");
        //             }
        //         }
        //         printf("\n");
        //     }
        // }
    }
}