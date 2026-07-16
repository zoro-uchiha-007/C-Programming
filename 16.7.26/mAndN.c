#include<stdio.h>
int main(){
    int m,n;
    printf("Enter M and N:");
    scanf("%d%d",&m,&n);
    if(m>=n){
        printf("M can't be greater than N");
        return 0;
    }
    for(int i=m;i<=n;i++){
        if(m>=1 && n<=10)
        printf("%02d ",i);
        else if(m>=10 && n<=999)
        printf("%03d ",i);
        else{
            printf("%03d ",i);
        }
    }
    return 0;
}