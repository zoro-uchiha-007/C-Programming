#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[i]=0;
                arr[j]=0;
            }
        }
    }
    printf("Unique elements:");
    for(int i=0;i<n;i++){
        if(arr[i]==0)
            continue;
        printf("%d ",arr[i]);
    }
    return 0;
}
