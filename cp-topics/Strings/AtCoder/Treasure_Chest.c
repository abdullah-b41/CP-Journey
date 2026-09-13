#include <stdio.h>
#include <string.h>

int main()
{
    int line = -1, star = 0, line2 = 0, n;
    char in[100];
    scanf("%d %s", &n, in);
    for (int i = 0; i < strlen(in); i++)
    {
        if (in[i] == '|' && line == -1)
            line = i;
        else if (line >= 0 && in[i] == '|')
            line2 = i;
        if (in[i] == '*')
            star = i;
    }
    if (star > line && star < line2)
        printf("in\n");
    else
        printf("out\n");
}
