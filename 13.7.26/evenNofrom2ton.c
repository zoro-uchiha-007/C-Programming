#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int i=2;
    even:
        printf("%d\n",i);
        i+=2;
    if(i<=n)
        goto even;
    return 0;
}