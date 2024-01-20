#include<stdio.h>
void main(){
  int n100,n10,n1,price,amount=0;
  scanf("%d %d %d %d",&n100,&n10,&n1,&price);
  amount=(100*n100)+(10*n10)+(1*n1);
  if(amount<price)
    printf("0");
  else
    printf("1");
}
