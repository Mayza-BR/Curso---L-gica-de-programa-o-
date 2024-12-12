//EX.3
#include <stdio.h>

int fatorial(int n) {
    int fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int A[10], B[10][3];

    printf("Digite os 10 elementos da matriz A:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 10; i++) {
        B[i][0] = A[i] + 5;
        B[i][1] = fatorial(A[i]);
        B[i][2] = A[i] * A[i];
    }

    printf("Matriz B (1ª coluna + 5, 2ª coluna fatorial, 3ª coluna quadrado):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t%d\t%d\n", B[i][0], B[i][1], B[i][2]);
    }

    return 0;
}
