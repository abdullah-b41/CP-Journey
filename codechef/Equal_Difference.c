#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; arr[i] + j != arr[j] + i; j++)
            {
                if (arr[i] + j == arr[j] + i)
                    cnt++;
            }
        }
        printf("%d\n", cnt);
    }
}