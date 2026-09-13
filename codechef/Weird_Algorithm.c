#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    printf("%lld ", n);
    long long num = n;
    if (n == 1)
        return 0;
    for (int i = 0; i < n * n; i++)
    {
        if (num % 2 == 0)
            num /= 2;
        else
            num = num * 3 + 1;
        printf("%lld ", num);
        if (num == 1)
            return 0;
    }
}
