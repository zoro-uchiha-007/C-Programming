#include<stdio.h>
int main(){
    float unit;
    printf("Enter units:");
    scanf("%f",&unit);
    switch (unit>=0 && unit<=200)
    {
    case 1:
        printf("Bill is %f",unit*3);
        break;
    
    case 0:
        switch (unit>=201 && unit<=500)
        {
        case 1:
            printf("Bill is %f",unit*4);
            break;
        
        default:
            switch (unit>=501 && unit<=1000)
            {
            case 1:
                printf("Bill is %f",unit*8);
                break;
            
            default:
                printf("Bill is %f",unit*16);
                break;
            }
        }
    
    }
    return 0;
}