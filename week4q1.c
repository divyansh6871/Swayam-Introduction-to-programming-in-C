#include <stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int avg=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        avg+=arr[i];
    }
    float avg1=(float)avg/n;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        if ((float)arr[i]>=avg1)
        {
            sum+=arr[i];
        }        
    }    
    printf("%d",sum);
}
