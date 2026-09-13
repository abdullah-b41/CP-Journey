#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int old[n];
    long long result[n];  

    for (int i = 0; i < n; i++)
        scanf("%d", &old[i]);

    for (int i = 0; i < n; i++)
    {
        int x = old[i];
        long long sum = 0;  
        for (int j = 0; j < n; j++)
        {
            if (old[j] > x)
                sum += old[j];
        }
        result[i] = sum;
    }

    for (int i = 0; i < n; i++)
        printf("%lld ", result[i]);  

    return 0;
}