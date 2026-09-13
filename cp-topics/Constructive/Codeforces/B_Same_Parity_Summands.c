#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        int n,k;
        scanf("%d %d", &n, &k);
        if(k < n && k < (n-1) && k < (n-2))
        {
            printf("Yes");
            
        }
        else 
        {
            printf("No");
        }
    }
}