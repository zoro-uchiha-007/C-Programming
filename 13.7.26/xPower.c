#include<stdio.h>
int main(){
    int x,n;
    printf("Enter x,n:");
    scanf("%d%d",&x,&n);
    int i=1,pow=1;
    
    power:
        pow*=x;
        printf("\n%d^%d is %d",x,i,pow);
        i++; 
if(i<=n)
    goto power;
    return 0;
}