#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long arr[n];
    for (int i = 0; i < n; i++)
        scanf("%lld", &arr[i]);
    long long diff = 0, cnt = 0;
    for (int i = 1; i < n; i++)
    {
        diff = arr[i - 1] - arr[i];
        if (diff > 0)
        {
            arr[i] += diff;
            cnt += diff;
        }
    }
    printf("%lld", cnt);
}