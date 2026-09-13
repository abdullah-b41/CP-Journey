#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int cnt = 0;
    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= n; b++)
        {
            double c = sqrt(a * a + b * b);
            if (c <= n && c == (int)c)
            {
                cnt++;
            }
        }
    }
    printf("%d", cnt / 2);
}