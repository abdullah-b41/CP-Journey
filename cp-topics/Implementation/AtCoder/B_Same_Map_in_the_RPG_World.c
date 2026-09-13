#include <stdio.h>

int main()
{
    int r, c, cnt_a[2] = {0}, cnt_b[2] = {0};
    scanf("%d %d", &r, &c);
    char a[31][31], b[31][31];
    for (int i = 0; i < r; i++)
    {
        scanf("%s", a[i]);
    }
    for (int i = 0; i < r; i++)
    {
        scanf("%s", b[i]);
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == '.')
            {
                cnt_a[0]++;
            }
            if (b[i][j] == '.')
            {
                b[i][j] = '.';
                cnt_b[0]++;
            }
            if (a[i][j] == '#')
            {
                cnt_a[1]++;
            }
            if (b[i][j] == '#')
            {
                cnt_b[1]++;
            }
        }
    }
    if (cnt_a[0] != cnt_b[0] || cnt_a[1] != cnt_b[1])
    {
        printf("No\n");
        return 0;
    }
    else
    {
        int flag = 1;
    }
}