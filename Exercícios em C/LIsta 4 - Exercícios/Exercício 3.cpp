//EX.3
#include <stdio.h>

int main() {
    int A[5], B[5], C[5];

  
    printf("Digite 5 elementos para a matriz A:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }

    
    printf("Digite 5 elementos para a matriz B:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &B[i]);
    }

  
    for (int i = 0, j = 0; i < 5; i++, j++) {
        C[j] = A[i] - B[j];
    }

   
    printf("Os elementos da matriz C (subtracao de A e B) sao:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", C[i]);
    }

    printf("\n");
    return 0;
}