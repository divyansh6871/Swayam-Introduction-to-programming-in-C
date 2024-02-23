#include <stdio.h>
int collatz(int n,int output){
    output++;
    if (n==1)
        return output;  
    else if (n%2==0)
        return collatz(n/2,output);
    else
        return collatz(3*n+1,output);
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int out=collatz(n,-1);
    printf("%d",out);
    return 0;
}
