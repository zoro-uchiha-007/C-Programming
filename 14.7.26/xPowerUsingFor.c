#include<stdio.h>
int main(){
    float x,n;
    float pow=1;
    printf("Enter x and n:");
    scanf("%f%f",&x,&n);
    for(float i=1;i<=n;i++){
        pow*=x;
        printf("%.f^%.f=%.2f\n",x,i,pow);
    }
    return 0;
}