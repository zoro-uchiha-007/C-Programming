#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int i=1;
    table:
        printf("%d*%d=%d\n",i,n,i*n);
        i++;
    if(i<=10)
        goto table;
    return 0;
}