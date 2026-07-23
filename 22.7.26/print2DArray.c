#include<stdio.h>
int main(){
    int size_of_row,size_of_column;
    printf("Enter the row and column size:");
    scanf("%d%d",&size_of_row,&size_of_column);
    int arr[size_of_row][size_of_column];
    for(int i=0;i<size_of_row;i++){
        for(int j=0;j<size_of_column;j++){
            printf("Enter the element[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<size_of_row;i++){
        for(int j=0;j<size_of_column;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}