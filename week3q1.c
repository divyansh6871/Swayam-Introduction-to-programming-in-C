#include <stdio.h>
#include <string.h>
void main()
{
    int arr[100];
    int n = 0;
    do
    {
        scanf("%d", &arr[n]);
        n++;
    } while (arr[n - 1] != -1);
    n = n - 1;
    for (int i = 0; i < n-1; i++)
    {
        printf("%0.1f",((float)(arr[i]+arr[i+1]))/2);
        if (i<n-2)
        {
            printf(" ");
        }
        
    }
    
    
}
