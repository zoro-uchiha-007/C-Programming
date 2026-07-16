#include<stdio.h>
int main(){
    int j;
    for (int i = 1; i<=4; i++)
    {
        for(int k=i;k<=4;k++){
            printf("  ");
        }
        for (j = 1; j<=i; j++)
        {
          printf("%d ",j);
        }
        for(int l=i-1;l>=1;l--){
            printf("%d ",l);
        }
        
        printf("\n");
    }
    
    return 0;
}