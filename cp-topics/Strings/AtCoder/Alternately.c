#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char in[100];
    scanf("%d %s", &n, in);
    for (int i = 0; i < strlen(in); i++)
    {
        if (in[i] == 'M' && in[i + 1] == 'M')
        {
            printf("No\n");
            return 0;
        }
        if (in[i] == 'F' && in[i + 1] == 'F')
        {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");
}
