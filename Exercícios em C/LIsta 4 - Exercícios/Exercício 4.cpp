//EX.4
#include <stdio.h>

int main() {
    int A[5], B[5], C[10];

    
    printf("Digite 5 elementos para a matriz A:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
        C[i] = A[i]; 
    }

 
    printf("Digite 5 elementos para a matriz B:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &B[i]);
        C[i + 5] = B[i]; 
    }

    printf("Os elementos da matriz C (juncao de A e B) sao:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", C[i]);
    }

    printf("\n");
    return 0;
}