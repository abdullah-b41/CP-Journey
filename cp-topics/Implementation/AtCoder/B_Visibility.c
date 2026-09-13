#include <stdio.h>

int main()
{
    int r, c, x, y;
    char s[100][100];
    scanf("%d %d %d %d", &r, &c, &x, &y);
    for (int i = 0; i < r; i++)
        scanf("%s", s[i]);
    int cnt = 1;
    int i = x - 1;
    for (int j = y; j < c; j++)
    {
        if (s[i][j] == '.')
            cnt++;
        else
            break;
    }
    for (int j = y - 2; j >= 0; j--)
    {
        if (s[i][j] == '.')
            cnt++;
        else
            break;
    }
    int j = y - 1;
    for (int i = x; i < r; i++)
    {
        if (s[i][j] == '.')
            cnt++;
        else
            break;
    }
    for (int i = x - 2; i >= 0; i--)
    {
        if (s[i][j] == '.')
            cnt++;
        else
            break;
    }
    printf("%d", cnt);
}
