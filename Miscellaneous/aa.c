#include <stdio.h>

int main() {
	// your code goes here
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int j=1;
        while(j<=(n-i))
        {
            printf(" ");
            j++;
        }
        for(int k=0;k<i;k++)
        {
            printf("*");
        }
        for(int l=1;l<i;l++)
        {
            printf("*");
        }
        printf("\n");
    }
}

