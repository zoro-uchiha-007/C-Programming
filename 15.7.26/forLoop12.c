#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            if (j % 2 == 1)
                printf("1 ");
            else
                printf("0 ");
        }

        for (int j = 1; j <= 2 * (n - i); j++)
            printf("  ");

        for (int j = i; j >= 1; j--) {
            if (j % 2 == 1)
                printf("1 ");
            else
                printf("0 ");
        }

        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {

        for (int j = 1; j <= i; j++) {
            if (j % 2 == 1)
                printf("1 ");
            else
                printf("0 ");
        }

        for (int j = 1; j <= 2 * (n - i); j++)
            printf("  ");

        
        for (int j = i; j >= 1; j--) {
            if (j % 2 == 1)
                printf("1 ");
            else
                printf("0 ");
        }

        printf("\n");
    }

    return 0;
}