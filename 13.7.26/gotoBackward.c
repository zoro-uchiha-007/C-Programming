#include<stdio.h>
int main(){
    int i=1;
    skip:
        printf("hello\n");
        i++;
    if(i<=5)
    goto skip;
}