#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    switch (n%7){
    case 0:
        printf("Multiple of 7");
        break;
    
    default:
        printf("It's not a Multiple of 7");
        break;
    }
    return 0;
}