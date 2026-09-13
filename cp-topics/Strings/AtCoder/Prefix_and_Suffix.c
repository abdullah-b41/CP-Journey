#include <stdio.h>
#include <string.h>

int main()
{
    int s = 1, p = 1, n, m;
    char check[100], ref[100];
    scanf("%d %d %s %s", &n, &m, check, ref);
    for (int i = 0; i < n; i++)
    {
        if (check[i] != ref[i])
            p = 0;
        if (check[i] != ref[m - n + i])
            s = 0;
    }
    // for (int i = m - 1; i >= m - n; i--)
    // {
    //     if (check[i] != ref[i])
    //         s = 0;
    // }
    if (s && p)
        printf("0");
    else if (s && !p)
        printf("2");
    else if (p && !s)
        printf("1");
    else
        printf("3");
}