#include<stdio.h>
int main(){
    int n,pos,value;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter position and value to insert:");
    scanf("%d%d",&pos,&value);
    for(int i=n;i>=pos;i--)
        arr[i]=arr[i-1];
    arr[pos-1]=value;
    n++;
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}