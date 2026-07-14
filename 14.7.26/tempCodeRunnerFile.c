//sum of the series [ 1-X2/2!+X4/4!- .........].
#include<stdio.h>
#include<math.h>
int main(){
    float x,n,square=0,fact,temp=0,res=1;
    int sign=-1;
    printf("Enter x and n:");
    scanf("%f%f",&x,&n);
    for(int i=2;i<=n;i+=2){
        square=pow(x,i);
        fact=1;
        for (int j = 1; j <=i; j++)
        {
            fact*=j;
        }
        temp=(square/fact)*sign;
        res+=temp;
        sign=-sign;
    }
    printf("%.2f",res);
    return 0;
}