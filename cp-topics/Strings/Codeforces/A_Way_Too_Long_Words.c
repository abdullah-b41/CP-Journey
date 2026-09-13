#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    char ok[101];
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s",&ok);
        int size = strlen(ok);
        if(size <= 10)
        {
            printf("%s\n",ok);
        }
        else
        {
            printf("%c%d%c\n",ok[0],size-2,ok[size-1]);
        }
    }
    return 0;
}