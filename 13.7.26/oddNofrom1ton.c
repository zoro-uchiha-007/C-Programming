#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int i=1;
    odd:
        printf("%d\n",i);
        i+=2;
    if(i<=n)
        goto odd;
    return 0;
}