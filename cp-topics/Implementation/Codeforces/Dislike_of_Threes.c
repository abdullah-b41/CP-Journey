#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i=0; i<t; i++)
    {
        int k;
        scanf("%d", &k);
        int num = 1, serial = 1;
        for (int num=1; serial<k; num++)
        {
            if (num%3 != 0 && num%10 != 3 )
            {
                serial++;
            }
        }
        printf("%d\n", num);
    }
}