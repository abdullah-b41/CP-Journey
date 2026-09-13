#include <stdio.h>
#include <string.h>

int main()
{
    char in[100];
    scanf("%s", in);
    for (int i = 1; i < strlen(in); i += 2)
    {
        if (in[i] != '0')
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
}