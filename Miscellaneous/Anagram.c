#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);
    int n = strlen(str1), farr1[26] = {0}, farr2[26] = {0};

    for (int i = 0; i<n; i++)
    {
        int index = str1[i] - 'a';
        farr1[index]++;
    }

    for (int i = 0; i<n; i++)
    {
        int index = str2[i] - 'a';
        farr2[index]++;
    }

    int prb = 0;
    for (int i=0; i<26; i++)
    {
        if (farr1[i] != farr2[i])
        {
            prb++;
            break;
        }
    }

    if (!prb)
    {
        printf("Anagram");
    }
    else
    {
        printf("No");
    }
    return 0;
}