#include <stdio.h>

int main()
{
    int array[8];
    int cnd = 0;

    for (int i=0; i<8; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] >= 100 && array[i] <= 675) cnd++;
        if (array[i]%25 == 0) cnd++;
    }

    for (int i=0; i<7; i++)
    {
        if (array[i+1] >= array[i]) cnd++;
    }

    if (cnd == 23) printf("Yes");
    else printf("No");

}