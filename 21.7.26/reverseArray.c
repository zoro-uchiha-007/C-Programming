#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n],arr2[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=n-1,j=0;i>=0,j<n;i--,j++){
        arr2[j]=arr[i];
    }
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}