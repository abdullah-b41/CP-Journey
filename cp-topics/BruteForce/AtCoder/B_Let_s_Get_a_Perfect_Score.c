#include <stdio.h>

int main()
{
    int n, m, f[300] = {};
    scanf("%d %d", &n, &m);
    char a[30][30] = {};
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &a[i]);
    }
    int found = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int cnt = 0;
            for (int k = 0; k < m; k++)
            {
                if (a[i][k] == 'o' || a[j][k] == 'o')
                {
                    cnt++;
                }
            }
            if (cnt >= m)
                found++;
        }
    }
    printf("%d", found);
}