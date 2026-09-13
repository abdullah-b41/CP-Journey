#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        int cost[n], value[n];

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &cost[j]);
        }

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &value[j]);
        }

        int more = 0, less = 1000000, dis = 0, total = 0, taste = 0;
        for (int j = 0; j < n; j++)
        {
            more = cost[j];
            if (cost[j] < less)
                less = cost[j];
            dis = ((more / 2) > 100) ? 100 : more / 2;
            total = more - dis + less;
            if (total <= k)
                more = cost[j];
            else
                more = 100000;
        }

        if (more != 100000)
        {
            for (int j = 0; j < n; j++)
            {
                if (less == cost[j])
                    taste += value[j];
                if (more == cost[j])
                    taste += value[j];
            }
        }
        else
            taste = 0;
        printf("%d\n", taste);
    }
    return 0;
}
