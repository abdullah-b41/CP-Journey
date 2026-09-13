#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char in[500];
        int n, cnt = 0, f_arr[26] = {};
        scanf("%d %s", &n, in);
        for (int i = 0; i < n; i++)
        {
            if (f_arr[in[i] - 'A'] == 0)
            {
                f_arr[in[i] - 'A']++;
                cnt += 2;
            }
            else
            {
                f_arr[in[i] - 'A']++;
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
}