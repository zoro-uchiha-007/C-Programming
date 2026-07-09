#include<stdio.h>
int main(){
    float a=0, b=0, c=0;
    printf("Enter A,B,C:");
    scanf("%f%f%f",&a,&b,&c);
    printf("Greatest no is %f",a>b?(a>c?a:c):(b>c?b:c));
    return 0;
}
