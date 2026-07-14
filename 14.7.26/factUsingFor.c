#include<stdio.h>
int main(){
    int n=0,fact=1;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d\n",fact);
    return 0;
}