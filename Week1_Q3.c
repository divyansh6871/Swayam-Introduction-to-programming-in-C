#include<stdio.h>
int main()
{
    int a1,b1,c1,a2,b2,c2,tempx=0,tempy=0;
    scanf("%d",&a1);
    scanf("%d",&b1);
    scanf("%d",&c1);
    scanf("%d",&a2);
    scanf("%d",&b2);
    scanf("%d",&c2);
    c1=(c1*a2)/a1;
    b1=(b1*a2)/a1;
    a1=(a1*a2)/a1;
    tempy=(c1-c2)/(b1-b2);
    tempx=(c2-(b2*tempy))/a2;
    printf("%d ",tempx);
    printf("%d",tempy);
    return 0;
}
