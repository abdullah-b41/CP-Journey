#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n < 7)
        printf("%d", n % 7);
    else
        printf("7");
}