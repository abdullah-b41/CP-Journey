#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, arr[101];
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        int flag[10000] = {0};
        for (int k = 0; j <= 100 * n; k++)
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < arr[i]; j++)
                {
                    sum += i * 100 / arr[i] + j * 100 / arr[j];
                }
            }
            if (sum == k)
                flag[k]++;
        }
    }
    for (int i = 0; i < 100 * n; i++)
    {
        if (flag[i] == 0)
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
}