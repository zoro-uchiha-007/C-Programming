#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int i=1,sum=0;
    odd:
        sum+=i;
        i+=2;
    if(i<=n)
        goto odd;
    printf("Sum of odd nos is %d",sum);
    return 0;
}