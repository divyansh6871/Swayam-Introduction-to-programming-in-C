#include <stdio.h>

int is_prime(int n){
  int count=1;
  for(int i=2;i<=(n/2);i++){
    if(n%i==0)
      return 0;
  }
}

int main() {

  int n,num;
  scanf("%d", &n);

  for(int i=0;i<n;i++){
      scanf("%d",&num);
      if(is_prime(num)){
          printf("%d ",num);
      }
  }

  return 0;
}
