#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[4 * n], cnt[n + 1];
    memset(cnt,0,sizeof(cnt));

    for (int i = 0; i < 4 * n; i++)
    {
        scanf("%d", &arr[i]);
        cnt[arr[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (cnt[i] < 4)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}