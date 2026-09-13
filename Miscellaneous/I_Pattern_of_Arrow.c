#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int total = 2*a-1;
    for (int i=1; i<=a; i++)
    {
        for (int j=1; j<=(2*i-1); j++)
        {
            if (j==i || j==(2*i-1))
            {
                printf("*");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }
    for (int i=(a-1); i>=1; i--)
    {
        for (int j=1; j<=(2*i-1); j++)
        {
            if (j==i || j==(2*i-1))
            {
                printf("*");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }
}