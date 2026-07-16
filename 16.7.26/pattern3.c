#include <stdio.h>

int main() {
    int n ;
    printf("Enter n:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        for (int k =1; k <= n - i; k++) {
            printf("  ");
        }
        for (int j = i; j < 2 * i; j++) {
            printf("%d ", j);
        }
        for (int j = 2 * i - 2; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
