#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    memset(arr, 0, sizeof(arr));
    for (int i = 1; i <= n; i++)
    {
        int index;
        scanf("%d", &index);
        arr[index]++;
    }
    for (int i = 1; i <= n; i++)
    {

        if (arr[i] == 0)
        {
            printf("%d", i);
        }
    }
    return 0;
}