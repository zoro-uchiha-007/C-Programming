#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n], visited[n], count[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        count[i] = 1;
        visited[i] = 0;
    }
    for (int i = 0; i < n; i++) {
         if (visited[i] == 1) {
            continue;
        }
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count[i]++;
                visited[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) {
            printf("Count of '%d' is %d\n", arr[i], count[i]);
        }
    }
    return 0;
}
