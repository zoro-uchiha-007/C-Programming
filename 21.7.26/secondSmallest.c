#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int min = INT_MAX;
    int secondMin = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            secondMin = min;
            min = arr[i];
        }
        else if (arr[i] < secondMin && arr[i] != min) {
            secondMin = arr[i];
        }
    }
    printf("Second min: %d\n", secondMin);
    return 0;
}
