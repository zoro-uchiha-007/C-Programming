#include<stdio.h>
int main(){
    int n,sum=0,rem=0;
    printf("Enter n:");
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    printf("Sum is %d",sum);
    return 0;
}