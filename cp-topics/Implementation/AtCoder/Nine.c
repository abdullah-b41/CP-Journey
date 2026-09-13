#include <stdio.h>

int main()
{
    int arr[5][5] = {0};
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            arr[i][j] = 3 * i + j - 3;
        }
    }

    int a, b, cnt = 0;
    scanf("%d%d", &a, &b);
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (a == arr[i][j] && (b == arr[i][j + 1] || b == arr[i][j - 1]))
            {
                printf("Yes");
                cnt++;
            }
        }
    }
    if (cnt == 0)
        printf("No");
    return 0;
}