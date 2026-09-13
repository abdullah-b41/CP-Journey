#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n], min = 100, max = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < min)
                min = arr[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > min && arr[i] < max)
                cnt++;
        }
        printf("%d\n", cnt);
    }
}