//EX.5
#include <stdio.h>

int main() {
    int A[20], B[30], C[50];

    printf("Digite 20 elementos para a matriz A:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &A[i]);
        C[i] = A[i];
    }

    printf("Digite 30 elementos para a matriz B:\n");
    for (int i = 0; i < 30; i++) {
        scanf("%d", &B[i]);
        C[i + 20] = B[i];
    }

    printf("Os elementos da matriz C sao:\n");
    for (int i = 0; i < 50; i++) {
        printf("%d ", C[i]);
    }

    printf("\n");
    return 0;
}