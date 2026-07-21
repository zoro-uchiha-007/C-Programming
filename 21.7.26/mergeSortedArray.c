#include <stdio.h>
int main() {
    int size_a,size_b;
    printf("Enter size of a and b:");
    scanf("%d%d",&size_a,&size_b);
    int a[size_a],b[size_b];
    for (int i=0;i<size_a;i++) {
        printf("Enter element %d: ",i + 1);
        scanf("%d",&a[i]);
    }
    for (int i = 0;i<size_b;i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &b[i]);
    }
    int size_c = size_a + size_b;
    int c[size_c];
    int i = 0; 
    int j = 0; 
    int k = 0;
    while (i < size_a && j < size_b) {
        if (a[i] <= b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < size_a) {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < size_b) {
        c[k] = b[j];
        j++;
        k++;
    }
    printf("Merged sorted array: ");
    for (int m = 0; m < size_c; m++) {
        printf("%d ", c[m]);
    }
    printf("\n");
    return 0;
}
