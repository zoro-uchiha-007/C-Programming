#include<stdio.h>
int main(){
    int n,pos;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter position to delete:");
    scanf("%d",&pos);
    for(int i=pos-1;i<n-1;i++)
        arr[i]=arr[i+1];
    n--;
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}