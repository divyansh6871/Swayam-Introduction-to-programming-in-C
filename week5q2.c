#include <stdio.h>
int func(int arr[], int size)
{
    if (size == 2)
    {
        return (arr[0] - arr[1]);
    }
    else
    {
        size = size / 2;
        int ar[size];
        for (int i = 0; i < size; i++)
        {
            ar[i] = arr[2 * i] - arr[2 * i + 1];
        }
        func(ar,size);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int out = func(arr, n);
    printf("%d", out);
    return 0;
}
