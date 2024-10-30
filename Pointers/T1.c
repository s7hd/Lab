#include <stdio.h>
#include <stdlib.h>

void ax(int *x, int a, int size) {
    for (int i = 0; i < size; i++)
        x[i] = a * x[i];
}

void bx(int *y, int b, int size) {
    for (int i = 0; i < size; i++)
        y[i] = b * y[i];
}

void add(int *x, int *y, int *z, int size) {
    for (int i = 0; i < size; i++)
        z[i] = x[i] + y[i];
}

int main() {
    int n;
    printf("Enter the size of the vector: ");
    scanf("%d", &n);

    int *px = (int *)malloc(n * sizeof(int));
    int *py = (int *)malloc(n * sizeof(int));
    int *pz = (int *)malloc(n * sizeof(int));

    if (px == NULL || py == NULL || pz == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    int a, b;
    printf("Enter scalar a: ");
    scanf("%d", &a);
    printf("Enter scalar b: ");
    scanf("%d", &b);

    printf("Enter the elements of vector x:\n");
    for (int i = 0; i < n; i++) {
        printf("x[%d]: ", i);
        scanf("%d", &px[i]);
    }

    printf("Enter the elements of vector y:\n");
    for (int i = 0; i < n; i++) {
        printf("y[%d]: ", i);
        scanf("%d", &py[i]);
    }

    for (int i = 0; i < n; i++)
        pz[i] = a * px[i] + b * py[i];

    printf("Vector z = ");
    for (int i = 0; i < n; i++)
        printf("[%d] ", pz[i]);
    printf("\n");

    free(px);
    free(py);
    free(pz);

    return 0;
}
