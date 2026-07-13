#include<stdio.h>
int main(){
    goto skip;
    printf("won't print");
    skip:
        printf("hello\n");
    return 0;
}