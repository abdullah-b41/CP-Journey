#include <stdio.h>
#include <math.h>

int main() //* parini
{
    int n;
    scanf("%d", &n);
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }

    double max = 0;
    for (int i = 0; i < n; i++)
    {
        double dx = 0, dy = 0, d = 0;
        for (int j = i + 1; j < n; j++) //* all possible pair generator
        {
            dx = (x[i] - x[j]) * (x[i] - x[j]);
            dy = (y[i] - y[j]) * (y[i] - y[j]);
            d = dx + dy;
            if (d > max)
                max = d;
        }
    }
    printf("%.10lf", sqrt(max));
}