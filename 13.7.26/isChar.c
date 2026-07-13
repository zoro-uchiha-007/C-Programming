#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    printf("Enter:");
    scanf("%c",&c);
    if(isalpha(c))
        printf("It's alphabet");
    else
        printf("It's not a alphabet");
    return 0;
}