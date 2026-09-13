#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int array1[a], array2[b];
    for (int i=0; i<a; i++)
    {
        scanf("%d", &array1[i]);
    }
    int points = 0;
    for (int i=0; i<b; i++)
    {
        scanf("%d", &array2[i]);
        points += array1[array2[i]-1];
    }
    printf("%d", points);
    return 0;
}