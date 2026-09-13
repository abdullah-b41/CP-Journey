#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, l, r;
    scanf("%d %d %d", &n, &l, &r);
    int old[n], new[n], diff = r - l;
    memset(new, 0, sizeof(new));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &old[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int x = l;
        if (old[i] <= l)
            new[i] = l;
        else if (old[i] >= r)
            new[i] = r;
        else if (old[i] > l && old[i] < r)
        {
            new[i] = old[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", new[i]);
    }
    return 0;
}