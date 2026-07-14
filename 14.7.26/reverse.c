#include<stdio.h>
int main(){
    long long rem=0,res=0,n;
    printf("Enter n:");
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%10;
        res=(res*10)+rem;
        n/=10;
    }
    printf("%lld",res);
    return 0;
}