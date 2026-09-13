#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        char in[200000];
        scanf("%d %s", &n, in);
        for (int i = 0; i < n;)
        {
            if (i + 2 <= n - 1 && (n - i) != 4 && (in[i] == 'b' || in[i] == 'c' || in[i] == 'd') && (in[i + 1] == 'a' || in[i + 1] == 'e') && (in[i + 2] == 'b' || in[i + 2] == 'c' || in[i + 2] == 'd'))
            {
                if (i + 2 != n - 1)
                {
                    printf("%c%c%c.", in[i], in[i + 1], in[i + 2]);
                    i += 3;
                }
                else
                {
                    printf("%c%c%c", in[i], in[i + 1], in[i + 2]);
                    i += 3;
                }
            }
            else if ((in[i] == 'b' || in[i] == 'c' || in[i] == 'd') && (in[i + 1] == 'a' || in[i + 1] == 'e'))
            {
                if (i + 1 != n - 1)
                {
                    printf("%c%c.", in[i], in[i + 1]);
                    i += 2;
                }
                else
                {
                    printf("%c%c", in[i], in[i + 1]);
                    i += 2;
                }
            }
            // else if ((in[i] == 'b' || in[i] == 'c' || in[i] == 'd') && (in[i + 1] == 'a' || in[i + 1] == 'e'))
        }
        printf("\n");
    }
}