#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = 1, count = 0;
    while (sum < b)
    {
        sum += a - 1;
        count++;
    }
    printf("%d", count);
}