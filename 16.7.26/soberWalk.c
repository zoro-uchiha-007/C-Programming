#include <stdio.h>
int main() {
    int n;
    int x = 0, y = 0;
    int distance = 10;
    char direction = 'R';
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    while (n > 0) {
        switch (direction) {
            case 'R':
                x = x + distance;
                direction = 'U';
                break;
            case 'U':
                y = y + distance;
                direction = 'L';
                break;
            case 'L':
                x = x - distance;
                direction = 'D';
                break;
            case 'D':
                y = y - distance;
                direction = 'A';
                break;
            case 'A':
                x = x + distance;
                direction = 'R';
                break;
        }
        distance = distance + 10;
        n--;
    }
    printf("%d %d\n", x, y);
    return 0;
}
