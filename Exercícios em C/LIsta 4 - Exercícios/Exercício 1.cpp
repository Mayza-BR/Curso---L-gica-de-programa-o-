//EX.1
#include <stdio.h>

int main() {

    int A[5], B[5];

    printf("Digite 5 elementos para a matriz A:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 5; i++) {
        B[i] = A[i] * 3;
    }

    printf("Os elementos da matriz B sao:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", B[i]);
    }

    printf("\n");
    return 0;
}