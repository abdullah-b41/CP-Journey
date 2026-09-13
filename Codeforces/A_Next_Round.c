#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int arr[n], cnt = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > k)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}