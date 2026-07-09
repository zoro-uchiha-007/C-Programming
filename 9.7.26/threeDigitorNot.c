#include<stdio.h>
int main()
{
    float n;
    printf("Enter n:");
    scanf("%f",&n);
    if(n>=100 && n<=999){
        printf("It is 3 digit no");
    }
    else{
        printf("It's not 3 digit no");
    }
    return 0;
}
