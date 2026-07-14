#include<stdio.h>
int main(){
    int n,sum=0,term=0;
    printf("Enter n:");
    scanf("%d",&n);
   for (int i = 1; i <= n; i++)
   {
    term*=(10+9);
    printf("%d+",term);
    sum+=term;
   }
   printf(" is %d",sum);
    return 0;
}