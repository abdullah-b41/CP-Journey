#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d%d", &row, &col);

    int matx[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matx[i][j]);
        }
    }

    int new[col][row];
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            new[i][j] = matx[j][i];
            printf("%d ", new[i][j]);
        }
        printf("\n");
    }
    return 0;
}