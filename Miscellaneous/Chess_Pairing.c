#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        int n, rated;
        scanf("%d %d", &n, &rated);
        int total = 2 * n, unrated = total - rated;
        int ans = rated - unrated;
        if(ans <= 0)
        {
            printf("0\n");
        }
        else
        {
        printf("%d\n", ans);
        }
    }
}