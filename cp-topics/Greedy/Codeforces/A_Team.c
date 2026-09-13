#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][3];
    int total = 0;

    for (int i=0; i<n; i++)
    {
        int cnt = 0;
        for (int j=0; j<3; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] > 0)
            {
                cnt++;
            }
        }
        if (cnt >= 2)
        {
            total++;
        }
    }
    printf("%d", total);
}