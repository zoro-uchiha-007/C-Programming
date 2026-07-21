#include <stdio.h>
int main() {
    int n,count=0;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n],visited[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++)
        visited[i]=0;
    for(int i=0;i<n;i++){
        if(visited[i]==1)
            continue;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                visited[j]=1;
                count++;
                break;
            }
        }
    }
    printf("Duplicate element count:%d",count);
    return 0;
}
