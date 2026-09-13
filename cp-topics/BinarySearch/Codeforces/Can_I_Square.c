#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        long long sum = 0;
        scanf("%d", &n);
        long long arr[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%lld", &arr[j]);
            sum += arr[j];
        }
        long long k = llround(sqrt((double)sum));
        printf(k * k == sum ? "YES\n" : "NO\n");
    }
    return 0;
}