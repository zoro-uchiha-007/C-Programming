#include<stdio.h>
int main(){
    float x,n;
    float pow=1;
    printf("Enter x and n:");
    scanf("%f%f",&x,&n);
    for(float i=1;i<=n;i++){
        pow*=x;
        printf("1/(%.f^%.f)=%.2f\n",x,i,(1/pow));
    }
    return 0;
}