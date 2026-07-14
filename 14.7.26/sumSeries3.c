//sum of the series [ 1-X2/2!+X4/4!- .........].
#include<stdio.h>
#include<math.h>
int main(){
    float x,square=0,fact,temp=0,res=1;
    int n,sign=1,power;
    printf("Enter x and n:");
    scanf("%f%d",&x,&n);
    for(int i=1;i<=n;i++){
        power=2*i;
        square=pow(x,power);
        fact=1;
        for(int j = 1; j <=power; j++)
        {
            fact*=j;
        }
        sign=-sign;
        temp=(square/fact)*sign;
        res+=temp;
    }
    printf("%.2f",res);
    return 0;
}