#include <stdio.h>
#include <string.h>

int main()
{
    int l, r;
    char in[100000];
    scanf("%d %d %s", &l, &r, in);

    // j is reverse looping
    for (int i = 0, j = r - 1; i < strlen(in); i++)
    {
        if (i < l - 1 || i > r - 1)
            printf("%c", in[i]);
        else
        {
            printf("%c", in[j]);
            j--;
        }
    }
}
