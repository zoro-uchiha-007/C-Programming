#include<stdio.h>
int main(){
    int n;
    printf("Enter a choice between (1-4)\n1 for Square\n2 for Circle\n3 for Rectangle\n4 for Triangle:");
    scanf("%d",&n);
    float a,r,l,b,h,br;
    switch (n)
    {
    case 1:
        printf("Enter length of the 'a' of Square:");
        scanf("%f",&a);
        printf("\nArea of Square is %f",a*a);
        break;
    case 2:
        printf("Enter Radius of the Circle:");
        scanf("%f",&r);
        printf("\nArea of Circle is %f",3.14*r*r);
        break;
    case 3:
        printf("Enter length and breadth of Rectangle:");
        scanf("%f%f",&l,&b);
        printf("\nArea of Rectangle is %f",l*b);
        break;
    case 4:
        printf("Enter breadth and height of Triangle:");
        scanf("%f%f",&br,&h);
        printf("\nArea of Triangle is %f",0.5*br*h);
        break;
    
    default:
        printf("Enter a valid number");
        break;
    }
    return 0;
}