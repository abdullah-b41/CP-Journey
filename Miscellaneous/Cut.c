#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int array[a];
    for (int i=0; i<a; i++)
    {
        scanf("%d", &array[i]);
    }
    int index = a-b;
    for (int j=index; j<a; j++)
    {
        printf("%d ", array[j]);
    }
    for (int k=0; k<index; k++)
    {
        printf("%d ", array[k]);
    }
}