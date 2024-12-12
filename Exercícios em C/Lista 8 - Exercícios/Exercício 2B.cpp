//EX 2.B
#include <stdio.h>

void lerMatriz(int matriz[], int tamanho);
void juntarMatrizes(int A[], int B[], int C[], int tamanho);
void exibirMatriz(int matriz[], int tamanho);

int main() {
    int A[30], B[30], C[60];
    int tamanho = 30;
    
    lerMatriz(A, tamanho);
    lerMatriz(B, tamanho);
    
    juntarMatrizes(A, B, C, tamanho);
    
    exibirMatriz(C, 2 * tamanho);
    
    return 0;
}

void lerMatriz(int matriz[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &matriz[i]);
    }
}

void juntarMatrizes(int A[], int B[], int C[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        C[i] = A[i];
        C[i + tamanho] = B[i];
    }
}

void exibirMatriz(int matriz[], int tamanho) {
    printf("Matriz C: ");
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", matriz[i]);
    }
    printf("\n");
}
