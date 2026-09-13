#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, min = 100;
        long long pro = 1;
        scanf("%d", &n);
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
            if (arr[j] < min)
                min = arr[j];
        }
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == min)
            {
                pro *= arr[j] + 1;
                min = 100;
            }
            else
                pro *= arr[j];
        }
        printf("%lld\n", pro);
    }
    return 0;
}