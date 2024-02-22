#include<stdio.h>
#include<string.h>
void main(){
  char str[30];
  scanf("%[^\n]s",str);
  int i=0;
  int count=0;
  while(*(str+i)!='\0'){
    if(*(str+i)=='1')
      count++;
    i++;
  }
  if(count%2==0)
    printf("0");
  else
    printf("1");
  
}
