#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);

    int step=0;
    for (int i=0;i<n;i++)
    {
        if (s[i+1]==s[i])
        {
            step++;
        }
    }
    printf("%d", step);
}