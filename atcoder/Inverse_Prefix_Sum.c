#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long old[n], new[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &old[i]);
    }

    new[0] = old[0];
    for (int i = 1; i < n; i++)
    {
        new[i] = old[i] - old[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%lld ", new[i]);
    }
    return 0;
}