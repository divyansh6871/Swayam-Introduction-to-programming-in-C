#include <stdio.h>
void bubbleSort(int array[], int size)
{
    for (int m = 0; m < size - 1; ++m)
    {
        for (int i = 0; i < size - m - 1; ++i)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

int main()
{

    int m, n;
    scanf("%d", &m);
    int a[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d",&n);
    int b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    bubbleSort(a,m);
    bubbleSort(b,n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i]==b[j])
            {
                printf("%d",a[i]);
                return 0;
            }                      
        }        
    }
    printf("-1");
    return 0;
}
