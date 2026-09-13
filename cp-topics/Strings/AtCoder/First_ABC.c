#include <stdio.h>
#include <string.h>

int main()
{
    char in[100];
    int cnt_A = 0, cnt_B = 0, cnt_C = 0, n;
    scanf("%i %s", &n, in);
    for (int i = 0; i < strlen(in); i++)
    {
        if (in[i] == 'A')
            cnt_A = 1;
        if (in[i] == 'B')
            cnt_B = 1;
        if (in[i] == 'C')
            cnt_C = 1;
        if (cnt_A + cnt_B + cnt_C == 3)
        {
            printf("%d\n", i + 1);
            return 0;
        }
    }
    printf("0\n");
}