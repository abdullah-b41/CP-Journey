#include <stdio.h>
#include <string.h>

int main()
{
    char in[100], out[200];
    scanf("%s", in);
    int spc = 0;
    for (int i = 0; i < strlen(in); i++)
    {
        out[i + spc] = in[i];
        out[i + spc + 1] = ' ';
        spc++;
    }
    printf("%s", out);
}