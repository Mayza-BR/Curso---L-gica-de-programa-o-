//EX.4
#include <stdio.h>

int main() {
    int A[4], B[4], C[4][2];

    printf("Digite os 4 elementos da matriz A:\n");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite os 4 elementos da matriz B:\n");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 4; i++) {
        C[i][0] = A[i] * 2;
        C[i][1] = B[i] - 5;
    }

    printf("Matriz C (1ª coluna: A * 2, 2ª coluna: B - 5):\n");
    for (int i = 0; i < 4; i++) {
        printf("%d\t%d\n", C[i][0], C[i][1]);
    }

    return 0;
}
