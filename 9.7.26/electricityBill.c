#include<stdio.h>
int main(){
    int unit;
    printf("Enter unit:");
    scanf("%d",&unit);
    if(unit>=0 && unit<=200){
        printf("Cost is %d",unit*3);
    }
    else if (unit>=201 && unit<=500)
    {
        printf("Cost is %d",unit*4);
    }
    else if (unit>=501 && unit<=1000)
    {
        printf("Cost is %d",unit*8);
    }
    else if (unit>1000)
    {
        printf("Cost is %d",unit*16);
    }
    else{
        printf("Unit can't be negative");
    }
}