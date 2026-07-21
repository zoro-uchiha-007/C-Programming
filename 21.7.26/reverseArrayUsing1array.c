#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n],temp;
    for(int i=0;i<n;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=n-1,i=0;j>=0,i<n/2;j--,i++){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}