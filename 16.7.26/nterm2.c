#include <stdio.h>
#include <math.h>
int main() {
    int n;
    int ans;
    printf("Enter n:");
    scanf("%d",&n);
    if (n % 2 != 0)
        ans = pow(2, (n - 1) / 2);
    else
        ans = pow(3, (n - 2) / 2);
    printf("The %dth term of the series is: %d\n", n, ans);
    return 0;
}
