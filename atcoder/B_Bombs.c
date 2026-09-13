#include <stdio.h> //! Parini >.<
#include <stdlib.h>

int main()
{
    int r, c, bi[400] = {}, bj[400] = {}, b_cnt[400] = {};
    scanf("%d %d", &r, &c);
    char input[20][21] = {};
    for (int i = 0; i < r; i++)
    {
        scanf("%s", input[i]);
    }
    int index = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (input[i][j] >= '1' && input[i][j] <= '9')
            {
                bi[index] = i;
                bj[index] = j;
                b_cnt[index] = input[i][j] - '0';
                index++;
            }
        }
    }

    for (int k = 0; k < index; k++)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (abs(i - bi[k]) + abs(j - bj[k]) <= b_cnt[k])
                {
                    input[i][j] = '.';
                }
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        printf("%s\n", input[i]);
    }
}