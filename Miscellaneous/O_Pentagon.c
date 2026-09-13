#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char x, y, m, n;
    scanf("%c%c",&x,&y);
    scanf(" %c%c",&m,&n);
    int a = x, b = y, c = m, d = n;
    if(((abs(a-b) == 1) || (abs(a-b) == 4)) && ((abs(c-d) == 1) || (abs(c-d) == 4)) )
    {
        printf("Yes");
    }
    else if(((abs(a-b) == 2) || (abs(a-b) == 3)) && ((abs(c-d) == 2) || (abs(c-d) == 3)))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}