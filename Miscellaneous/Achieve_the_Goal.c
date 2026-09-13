#include <stdio.h>

int main(void)
{
    int n, k, m, p;
    scanf("%d %d %d",&n, &k, &m);
    int sum = 0;
    for(int i=0; i < (n-1); i++)
    {
        scanf("%d",&p);
        sum += p;
    }
    if((((m*n)-sum) <= k) && ((m*n)-sum) > 0 )
    {
        printf("%d",((m*n)-sum));
    }
    else if(((m*n)-sum) <= 0)
    {
        printf("0");
    }
    else
    {
        printf("-1");
    }
}