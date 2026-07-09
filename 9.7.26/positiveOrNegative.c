#include<stdio.h>
int main(){
    float n;
    printf("Enter n:");
    scanf("%f",&n);
    if(n>=0){
        printf("Positive");
    }
    else{
        printf("Negative");
    }
    return 0;
}