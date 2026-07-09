#include<stdio.h>
int main(){
    int a=0;
    printf("Enter A:");
    scanf("%d",&a);
    a%5==0 && a%7==0?printf("Divisible by both 5 and 7"):
    (a%5==0?printf("Divisible by 5"):printf("Divisible by 7"));
    return 0;
}
