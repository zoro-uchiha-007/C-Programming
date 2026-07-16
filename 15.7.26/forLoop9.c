#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        for(int k=n-i;k>0;k--){
            printf("  ");
        }
        for(int h=n-i;h>1;h--){
            printf("  ");
        }
        for(int m=i;m>0;m--){
            if(m==n){
                continue;
            }
            else{
            printf("%d ",m);
            }
        }
        printf("\n");
    }
    return 0;
}