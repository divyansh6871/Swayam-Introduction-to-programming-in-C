#include <stdio.h>
void main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        if (b > c)
            printf("%d", b);
        else
            printf("%d", c);
    }
    else{
        if((a>c&&a<b))
        printf("%d",a);
        if((a<c&&a>b))
        printf("%d",a);
        if(b>a&&b<c)
        printf("%d",b);
        if(c>a&&c<b)
        printf("%d",c);
    }
}
