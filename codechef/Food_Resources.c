#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[n], total = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
            max = arr[i];
    }
    total += max;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
        {
            arr[i] = 0;
            max = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    total += max;
    printf("%d", total / m);
}