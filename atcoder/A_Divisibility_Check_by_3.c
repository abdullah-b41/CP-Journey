#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[51];
        int sum = 0;
        scanf("%s", s);
        int n = strlen(s);

        for (int j = 0; j < n; j++)
        {
            sum += s[j] - '0';
        }
        if (sum % 3 == 0)
            printf("Case %d: Divisible\n", i + 1);
        else
            printf("Case %d: Not divisible\n", i + 1);
    }
}