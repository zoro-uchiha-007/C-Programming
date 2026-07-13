#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int i=2,sum=0;
    even:
        sum+=i;
        i+=2;
    if(i<=n)
        goto even;
    printf("Sum of even nos is %d",sum);
    return 0;
}