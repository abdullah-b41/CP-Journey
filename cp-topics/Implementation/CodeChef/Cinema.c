#include <stdio.h>

int main()
{
    int n, m, a[1000][1000] = {0}, b[1000][1000] = {0};
    scanf("%d %d", &n, &m);
    int num1 = 1, num2 = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = num1;
            num1++;
        }
    }
    for (int j = 0; j < m; j++)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            b[i][j] = num2;
            num2++;
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == b[i][j])
                cnt++;
        }
    }
    printf("%d\n", cnt);
}