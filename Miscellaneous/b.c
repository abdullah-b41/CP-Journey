#include <stdio.h>              // Parini

int main(void)
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for(int k = n; k > i; k--)
        {
            printf("%i ", (i + 1));
        }
        printf("\n");
    }
}

