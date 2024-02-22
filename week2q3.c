#include<stdio.h>
#include<string.h>
void main(){
  char str[30];
  scanf("%[^\n]s",str);
  int start=0,end=0,count=0,length=0;
  length=strlen(str);
  length=length-2;
  for(int i=length;i>=0;i--){
    if(str[i]=='1'){
      end=i;
      break;
    }
  }
    for(int i=0;i<length;i++){
      if(str[i]=='1'){
        start=i;
        break;
      }
    }
//   printf("%d %d",start,end);
  for(int i=start;i<=end;i++){
    if (str[i]=='0')
    {
        count++;
    }    
  }
  printf("%d",count);
}
