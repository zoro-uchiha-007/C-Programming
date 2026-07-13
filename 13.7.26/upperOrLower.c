#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    printf("Enter:");
    scanf("%c",&c);
    if(isupper(c))
        printf("It's Uppercase");
    else if(islower(c))
        printf("It's Lowercase");
    else
        printf("It's a number");
    return 0;
}