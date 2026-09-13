#include <stdio.h>
#include <string.h>

int main()
{
    int t = 0, a = 0, n, cnt_t = 0, cnt_a = 0;
    char in[100], out;
    scanf("%d %s", &n, in);
    for (int i = 0; i < strlen(in); i++)
    {
        if (in[i] == 'A')
        {
            cnt_a++;
            a = i;
        }
        if (in[i] == 'T')
        {
            cnt_t++;
            t = i;
        }
    }
    if (cnt_t == cnt_a)
        printf("%c", out = t < a ? 'T' : 'A');
    else
        printf("%c", out = cnt_t > cnt_a ? 'T' : 'A');
}
