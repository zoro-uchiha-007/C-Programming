#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    if(n==0) 
        printf("Fact of 0 is 1");
    else{
    int i=1,fact=1;
    fact:
        fact*=i;
        i++;
    if(i<=n)
        goto fact;
    printf("Fact of %d is %d",n,fact);
    }
    return 0;
}