#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    printf("0 0 %lld", n); //* intuitive

    // if (n == 0) //* bruteforce
    //     printf("0 0 0");
    // else if (n == 1)
    //     printf("0 0 1");
    // else if (n == 2)
    //     printf("2 0 0");
    // else
    // {
    //     long long a = 0, b = 1, num = 0, size = 0;
    //     for (int i = 2; num < n; i++)
    //     {
    //         num = a + b;
    //         a = b;
    //         b = num;
    //         size = i;
    //     }
    //     size += 1;

    //     long long arr[size], index = 0;
    //     arr[0] = 0, arr[1] = 1;
    //     a = 0, b = 1, num = 0;
    //     for (int i = 2; num < n; i++)
    //     {
    //         num = a + b;
    //         arr[i] = num;
    //         a = b;
    //         b = num;
    //         index = i;
    //     }
    //     long long sum = arr[index - 1] + arr[index - 3] + arr[index - 4];
    //     if (sum == n)
    //         printf("%lld %lld %lld", arr[index - 1], arr[index - 3], arr[index - 4]);
    //     else
    //         printf("I'm too stupid to solve this problem");
    // }
}