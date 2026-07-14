#include <stdio.h>

int main() {
    int n,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\t",i*i);
        sum+=(i*i);
    }
    printf("\nSum is %d",sum);
    return 0;
}
