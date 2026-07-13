//print x,x^2,x^3,x^4,x^n
#include<stdio.h>
int main(){
    float x,n;
    printf("Enter x,n:");
    scanf("%f%f",&x,&n);
    float i=1,pow=1;
    
    divide:
        pow*=x;
        printf("\n1/(%.f^%.f) is %.2f",x,i,1/pow);
        i++;
    
    if(i<=n)
        goto divide;
    return 0;
}