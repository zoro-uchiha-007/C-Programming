#include<stdio.h>
#include<math.h>
int main(){
    int n,res=0,rem=0,temp=0,count=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    temp=i;
    res=0;
    rem=0;
    count=0;
    while (temp!=0)
    {
        temp/=10;
        count++;
    }
    temp=i;
    while (temp!=0)
    {
        rem=temp%10;
        res+=pow(rem,count);
        temp/=10;
    }
    if(i==res)
        printf("%d ",res);
    }
    return 0;
}