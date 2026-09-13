#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n > 3 || n == 1)
    {
        for (int i = 2; i <= n; i += 2)
        {
            printf("%d ", i);
        }
        for (int i = 1; i <= n; i += 2)
        {
            printf("%d ", i);
        }
    }
    else
        printf("NO SOLUTION");
}   