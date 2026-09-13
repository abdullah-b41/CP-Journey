#include <stdio.h>

int main() //*"If there are several possible answers, you can print any of them."
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n == 1)
            printf("1");
        else if (n == 2)
            printf("2 1");
        else
        {
            printf("1 ");
            for (int i = 3; i <= n; i++)
            {
                printf("%d ", i);
            }
            printf("2");
        }
        printf("\n");
    }
}