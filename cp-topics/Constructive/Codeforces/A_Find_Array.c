#include <stdio.h>

int main() //* "If there are multiple arrays satisfying all the conditions, print any of them."
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            printf("%d ",i+2);
        }
        printf("\n");
    }
} 