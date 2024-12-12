//EX.7
#include <stdio.h>

int main() {
    int A[10], B[10];

    printf("Digite 10 elementos para a matriz A:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 10; i++) {
        B[9 - i] = A[i];
    }

    printf("Os elementos da matriz B (inverso de A) sao:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", B[i]);
    }

    printf("\n");
    return 0;
}