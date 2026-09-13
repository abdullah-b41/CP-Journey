#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = 0;
    for (int i=0; i<n; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            max = arr[i+1];
        }
    }

    for (int i=0; i<n; i++)
    {
        if(arr[i] == max)
        {
            arr[i] = 0;
        }
    }

    int max2 = 0;
    for (int i=0; i<n; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            max2 = arr[i+1];
        }
    }

    printf("%d", max2);
}