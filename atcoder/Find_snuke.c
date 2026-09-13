#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c;
    char input[100][101] = {};
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
        scanf("%s", input[i]);

    for (int i = 0; i < r; i++) // row checker
    {
        for (int j = 0; j < c - 4; j++)
        {
            if (input[i][j] == 's')
            {
                if (input[i][j + 1] == 'n')
                {
                    if (input[i][j + 2] == 'u')
                    {
                        if (input[i][j + 3] == 'k')
                        {
                            if (input[i][j + 4] == 'e')
                            {
                                printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d", i + 1, j + 1, i + 1, j + 2, i + 1, j + 3, i + 1, j + 4, i + 1, j + 5);
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < r; i++) // reverse row checker
    {
        for (int j = c - 1; j >= 4; j--)
        {
            if (input[i][j] == 's')
            {
                if (input[i][j - 1] == 'n')
                {
                    if (input[i][j - 2] == 'u')
                    {
                        if (input[i][j - 3] == 'k')
                        {
                            if (input[i][j - 4] == 'e')
                            {
                                printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d", i + 1, j + 1, i + 1, j, i + 1, j - 1, i + 1, j - 2, i + 1, j - 3);
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int j = 0; j < c; j++) // column checker
    {
        for (int i = 0; i < r - 4; i++)
        {
            if (input[i][j] == 's')
            {
                if (input[i + 1][j] == 'n')
                {
                    if (input[i + 2][j] == 'u')
                    {
                        if (input[i + 3][j] == 'k')
                        {
                            if (input[i + 4][j] == 'e')
                            {
                                printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d", i + 1, j + 1, i + 2, j + 1, i + 3, j + 1, i + 4, j + 1, i + 5, j + 1);
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int j = 0; j < c; j++) // reverse column checker
    {
        for (int i = r - 1; i >= 4; i--)
        {
            if (input[i][j] == 's')
            {
                if (input[i - 1][j] == 'n')
                {
                    if (input[i - 2][j] == 'u')
                    {
                        if (input[i - 3][j] == 'k')
                        {
                            if (input[i - 4][j] == 'e')
                            {
                                printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d", i + 1, j + 1, i, j + 1, i - 1, j + 1, i - 2, j + 1, i - 3, j + 1);
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    if (r >= 5 && c >= 5)
    {
        for (int i = 0; i < r; i++) // diagonal checker
        {
            for (int j = 0; j < c; j++)
            {
                if (i + 4 < r && j + 4 < c)
                {
                    if (input[i][j] == 's')
                    {
                        if (input[i + 1][j + 1] == 'n')
                        {
                            if (input[i + 2][j + 2] == 'u')
                            {
                                if (input[i + 3][j + 3] == 'k')
                                {
                                    if (input[i + 4][j + 4] == 'e')
                                    {
                                        printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d", i + 1, j + 1, i + 2, j + 2, i + 3, j + 3, i + 4, j + 4, i + 5, j + 5);
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        for (int i = r - 1; i >= 0; i--) // reverse diagonal checker
        {
            for (int j = c - 1; j >= 0; j--)
            {
                if (i - 4 >= 0 && j - 4 >= 0)
                {
                    if (input[i][j] == 's')
                    {
                        if (input[i - 1][j - 1] == 'n')
                        {
                            if (input[i - 2][j - 2] == 'u')
                            {
                                if (input[i - 3][j - 3] == 'k')
                                {
                                    if (input[i - 4][j - 4] == 'e')
                                    {
                                        printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d", i + 1, j + 1, i, j, i - 1, j - 1, i - 2, j - 2, i - 3, j - 3);
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        for (int i = r - 1; i >= 0; i--) // right diagonal checker
        {
            for (int j = 0; j < c; j++)
            {
                if (i - 4 >= 0 && j + 4 < c)
                {
                    if (input[i][j] == 's')
                    {
                        if (input[i - 1][j + 1] == 'n')
                        {
                            if (input[i - 2][j + 2] == 'u')
                            {
                                if (input[i - 3][j + 3] == 'k')
                                {
                                    if (input[i - 4][j + 4] == 'e')
                                    {
                                        printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d", i + 1, j + 1, i, j + 2, i - 1, j + 3, i - 2, j + 4, i - 3, j + 5);
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        for (int i = 0; i < r; i++) // reverse right diagonal checker
        {
            for (int j = c - 1; j >= 0; j--)
            {
                if (i + 4 < r && j - 4 >= 0)
                {
                    if (input[i][j] == 's')
                    {
                        if (input[i + 1][j - 1] == 'n')
                        {
                            if (input[i + 2][j - 2] == 'u')
                            {
                                if (input[i + 3][j - 3] == 'k')
                                {
                                    if (input[i + 4][j - 4] == 'e')
                                    {
                                        printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d", i + 1, j + 1, i + 2, j, i + 3, j - 1, i + 4, j - 2, i + 5, j - 3);
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}