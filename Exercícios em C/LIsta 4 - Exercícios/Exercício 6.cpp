//EX.6
#include <stdio.h>

int main() {
    int A[8], B[8];

    printf("Digite 8 elementos para a matriz A:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &A[i]);
        B[i] = A[i] * A[i];
    }

    printf("Os elementos da matriz B (quadrados dos elementos de A) sao:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", B[i]);
    }

    printf("\n");
    return 0;
}