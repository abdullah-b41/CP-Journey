#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        int a;
        scanf("%d", &a);
        int temp = a;
        int cnt = 0;
        while(a > 0)
        {
            if (a % 10 != 0)
            {
                cnt ++;
            }
            a /= 10;
        }
        printf("%d\n", cnt);
        int b, p = 1;
        while(temp > 0)
        {
            b = (temp % 10) * p;
            if( b != 0)
            {
                printf("%d ", b);
            }
            temp /= 10;
            p *= 10;
        }
        printf("\n");
    }
}