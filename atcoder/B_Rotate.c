#include <stdio.h> //! Parini

int main()
{
    int n;
    char a[100][100] = {0},
         b[100][100] = {0}; //! why not array? instead of string?
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) //* All != are to make b valid.
        {
            if (i == 0 && j != n - 1)
            {
                b[i][j + 1] = a[i][j];
            }
            else if (j == n - 1 && i != n - 1)
            {
                b[i + 1][j] = a[i][j];
            }
            else if (i == n - 1 && j != 0)
            {
                b[i][j - 1] = a[i][j];
            }
            else if (j == 0 && i != 0)
            {
                b[i - 1][j] = a[i][j];
            }
            else
            {
                b[i][j] = a[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c", b[i][j]);
        }
        printf("\n");
    }
}