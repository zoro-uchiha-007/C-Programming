#include <stdio.h>
int main() {
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int ans;
    if (n%2!=0)
        ans = ((n + 1) / 2 - 1) * 7;
    else
        ans = (n / 2 - 1) * 6;
    printf("The %dth term of the series is: %d\n", n, ans);
    return 0;
}
