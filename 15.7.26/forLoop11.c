#include<stdio.h>
int main(){
    int n,r;
    printf("Enter n and r:");
    scanf("%d%d",&n,&r);
    for(int k=1;k<=r;k++){
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            printf(" ");
        }
        printf("%d\n",i);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        printf("%d\n",i);
    }
}
    return 0;
}