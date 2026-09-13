#include <stdio.h>
#include <string.h>

int main()
{  
    char str[100];
    scanf("%s", str);
    int n = strlen(str);
    int farray[26] = {0};
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int index = str[i] - 'a';
        farray[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if(farray[i] > 0)
        {
            cnt++;
        }
    }

    if (cnt%2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
}