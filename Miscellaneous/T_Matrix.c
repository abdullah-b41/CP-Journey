#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int array[n][n];
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d ", &array[i][j]);
        }
    }
    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < n; l++)
        {
            if(k == l)
            {
                sum1 += array[k][l]; 
            }
        }
    }
    for (int m = 0; m < n; m++)
    {
        for (int p = n; p >= 0; p--)
        {
            if((m+p) == (n-1))
            {
                sum2 += array[m][p]; 
            }
        }
    }
    printf("%d", abs(sum1-sum2));
    return 0;
}