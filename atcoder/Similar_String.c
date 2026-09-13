#include <stdio.h>
#include <string.h>

int main()
{
    char in[100], in2[100];
    bool check = true;
    int n;
    scanf("%d %s %s", &n, in, in2);
    for (int i = 0; i < n; i++)
    {
        if (in[i] != in2[i])
        {
            if (in[i] == '0' && in2[i] == 'o')
            {
                check = true;
            }
            else if (in[i] == 'l' && in2[i] == '1')
            {
                check = true;
            }
            else if (in[i] == 'o' && in2[i] == '0')
            {
                check = true;
            }
            else if (in[i] == '1' && in2[i] == 'l')
            {
                check = true;
            }
            else
                check = false;
        }
        if (check == false)
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
}