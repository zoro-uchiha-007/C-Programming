#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);
    if (r1 != r2 || c1 != c2)
    {
        printf("\nMatrix addition is not possible.\n");
        return 0;
    }
    int a[r1][c1], b[r2][c2], sum[r1][c1];
    printf("\nEnter elements of Matrix A:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    printf("\nEnter elements of Matrix B:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            sum[i][j] = a[i][j] + b[i][j];
    printf("\nSum Matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}