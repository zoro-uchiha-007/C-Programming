#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter A,B,C:");
    scanf("%d%d%d",&a,&b,&c);
    switch(a>b)
    {
    case 1:
        printf("Greatest no is %d",a>c?a:c);
        break;
    
    case 0:
        printf("Greatest no is %d",b>c?b:c);
        break;
    }
    return 0;
}