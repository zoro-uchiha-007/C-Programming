#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int i=1,sum=0;
    sum:
        sum+=i;
        i++;
    if(i<=n)
        goto sum;
    printf("%d\n",sum);
    return 0;
}