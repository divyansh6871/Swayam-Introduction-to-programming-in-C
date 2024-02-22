#include <stdio.h>
#include <string.h>
void main()
{
    int pos, count = 0,index=0;
    scanf("%d", &pos);
    int arr[100];
    int n = 0;
    do
    {
        scanf("%d", &arr[n]);
        n++;
    } while (arr[n - 1] != -1);
    n = n - 1;
    // printf("%d",n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            continue;
        count++;
        if (count==pos)
        {
            index=i;
            break;
        }
    }
    if (count<pos)
    {
        printf("-1");
    }
    else
    printf("%d",arr[index]);
    
}
