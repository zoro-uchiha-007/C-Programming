#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[100][100];
    for (int i = 1; i <=n; i++)
    {
        for(int k=1;k<=n-i;k++)
            printf(" ");
        for(int j=1;j<=i;j++){
            if(j==1||j==n)
                arr[i][j]=1;
            else{
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}