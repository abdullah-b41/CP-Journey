#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int ext = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (i > 0)
            ext += abs(arr[i] - arr[i - 1]) - 1;
    }

    int arr2[n + ext];
    arr2[0] = arr[0];
    for (int i = 1, k = 0; i < n; i++)
    {
        int diff = abs(arr[i] - arr[i - 1]);
        if (diff > 1 && arr[i] > arr[i - 1])
        {
            for (int j = 1; j <= diff; j++)
            {
                arr2[i + j + k - 1] = arr[i - 1] + j;
            }
        }
        else if (diff > 1 && arr[i] < arr[i - 1])
        {
            for (int j = 1; j <= diff; j++)
            {
                arr2[i + j + k - 1] = arr[i - 1] - j;
            }
        }
        else
        {
            arr2[i+k] = arr[i];
        }
        k += diff - 1;
    }

    for (int i = 0; i < n + ext; i++)
    {
        printf("%d ", arr2[i]);
    }
}