#include <stdio.h>
int main() {
    int n, len;
    scanf("%d %d", &n, &len);
    int total_mints = n;
    for (int i = 2; i <= len; i++) {
        total_mints = 2 * total_mints - 1;
    }
    printf("%d\n", total_mints);
    return 0;
}
