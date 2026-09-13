#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        if(n<3)
        {
            printf("2\n");
        }
        else if(n==3)
        {
            printf("3\n");
        }
        else if((n%2)<(n%3))
        {
            printf("%d\n",n%2);
        }
        else
        {
            printf("%d\n",n%3);
        }
    }
}