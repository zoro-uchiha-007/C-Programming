#include<stdio.h>
#include<math.h>
int main(){
    int n,res=0,rem=0,temp=0,count=0;
    printf("Enter n:");
    scanf("%d",&n);
    temp=n;
    while (temp!=0)
    {
        temp/=10;
        count++;
    }
    temp=n;
    while (temp!=0)
    {
        rem=temp%10;
        res+=pow(rem,count);
        temp/=10;
    }
    if(n==res)
        printf("It's a armstrong no");
    else
        printf("It's not a armstrong no");
    return 0;
}