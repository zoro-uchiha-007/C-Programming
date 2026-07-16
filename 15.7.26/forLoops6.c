#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for (int i = 1; i<=n; i++)
    {
        for(int k=i;k<=n;k++){
            printf("  ");
        }
        for (int j = 1; j<=i; j++)
        {
          printf("%d ",j);
        }
        for(int l=i-1;l>=1;l--){
            printf("%d ",l);
        }
        printf("\n");
    }
    for(int i=n;i>0;i--){
        for(int k=i-1;k<=n;k++){
            printf("  ");
        }
        for(int l=1;l<i;l++){
            printf("%d ",l);
        }
        for(int m=i-2;m>=1;m--){
            printf("%d ",m);
        }
        printf("\n");
    }
    
    return 0;
}