#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n], cnt[n + 1];
        memset(cnt, 0, sizeof(cnt));
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
            cnt[arr[j]]++;
        }

        int cnt2 = 0;
        for (int j = 1; j <= n; j++)
        {
            if (cnt[j] >= 3)
            {
                printf("%d\n", j);
                break;
            }
            else
            {
                cnt2++;
            }
        }
        if (cnt2 == n)
            printf("-1\n");
    }
    return 0;
}