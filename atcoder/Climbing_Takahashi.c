#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    int array[a];
    for (int i=0; i<a; i++)
    {
        scanf("%d", &array[i]);

    }
    int position = array[0];
    for (int i=0; i<(a-1); i++)
    {
        if(array[i+1]>array[i])
        {
            position = array[i+1];
        }
        else
        {
            break;
        }
    }
    printf("%d", position);
}