#include<stdio.h>
int main(){
    int n;
    do{
    printf("Enter a choice between (1-4)\n1 for Square\n2 for Circle\n3 for Rectangle\n4 for Triangle:\n5 for exit\n");
    scanf("%d",&n);
    float a,r,l,b,h,br;
    switch (n)
    {
    case 1:
        printf("Enter length of the 'a' of Square:");
        scanf("%f",&a);
        printf("\nArea of Square is %f\n",a*a);
        break;
    case 2:
        printf("Enter Radius of the Circle:");
        scanf("%f",&r);
        printf("\nArea of Circle is %f\n",3.14*r*r);
        break;
    case 3:
        printf("Enter length and breadth of Rectangle:");
        scanf("%f%f",&l,&b);
        printf("\nArea of Rectangle is %f\n",l*b);
        break;
    case 4:
        printf("Enter breadth and height of Triangle:");
        scanf("%f%f",&br,&h);
        printf("\nArea of Triangle is %f\n",0.5*br*h);
        break;
    
    case 5:
        printf("Exited successfully");
        return 0;
    
    default:
        printf("Enter a valid number\n");
        break;
    }
}while(n!=5);
}