#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    if(n%11==0 && n%32==0){
        printf("Multiple of 11 and 32");
    }
    else{
        printf("It's not a Multiple of 11 and 32");
    }
    return 0;
}