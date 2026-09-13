#include <stdio.h>

int main() //* parini
{
    int n, d;
    scanf("%d%d", &n, &d);
    char work[n][d + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", work[i]);
    }

    int present[d];

    for (int i = 0; i < d; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (work[j][i] == 'o')
            {
                cnt++;
            }
        }
        present[i] = (cnt == n) ? 1 : 0;
    }

    // int max = 0, cur = 0;
    // for (int i = 0; i < d; i++)
    // {
    //     if (present[i] == 1)
    //         cur++;
    //     else
    //         cur = 0;
    //     if (cur > max)
    //         max = cur;
    // }
    // printf("%d", max);
    //!
    int max_cons = 0, cur_cons = 0, cnt0 = 0;
    for (int i = 0; i < d - 1; i++)
    {
        if (present[i] == 1 && present[i + 1] == 1)
            cur_cons++;
        else
            cur_cons = 0;
        if (cur_cons > max_cons)
            max_cons = cur_cons;
    }

    for (int i = 0; i < d; i++)
        if (present[i] == 0)
            cnt0++;

    if (cnt0 == d)
        printf("0");
    else
        printf("%d", max_cons + 1);
    return 0;
}