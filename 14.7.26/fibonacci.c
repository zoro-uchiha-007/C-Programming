#include<stdio.h>
int main(){
    int a=0,b=1,temp,n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        temp=a+b;
        a=b;
        b=temp;
    }
    return 0;
}