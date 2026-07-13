#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    printf("Enter:");
    scanf("%c",&c);
    if(isalpha(c))
        printf("It's a Character");
    else if(isdigit(c))
        printf("It's a number");
    else
        printf("It's a special symbol");
    return 0;
}
