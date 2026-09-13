#include <stdio.h>

int main()
{
    char chess[8][9];
    for (int i = 0; i < 8; i++)
    {
        scanf("%s", chess[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chess[i][j] == '*')
            {
                printf("%c%d", j + 'a', 8 - i);
                break;
            }
        }
    }
    return 0;
}