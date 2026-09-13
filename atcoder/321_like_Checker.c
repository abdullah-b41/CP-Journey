#include <stdio.h>
#include <string.h>

int main()
{
    char in[5];
    scanf("%s", in);
    for (int i = 0; i < strlen(in); i++)
    {
        if (in[i] <= in[i + 1])
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
}