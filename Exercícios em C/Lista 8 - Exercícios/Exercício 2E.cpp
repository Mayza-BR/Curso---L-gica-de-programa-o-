//EX 2.E
#include <stdio.h>

void ordenarMatriz(int matriz[], int tamanho);
void exibirMatriz(int matriz[], int tamanho);

int main() {
    int A[12], B[12], C[12];
    int tamanho = 12;
    
    printf("Digite os elementos da matriz A:\n");
    for(int i = 0; i < tamanho; i++) {
        printf("Elemento A[%d]: ", i + 1);
        scanf("%d", &A[i]);
    }
    
    ordenarMatriz(A, tamanho);
    
    printf("Digite os elementos da matriz B:\n");
    for(int i = 0; i < tamanho; i++) {
        printf("Elemento B[%d]: ", i + 1);
        scanf("%d", &B[i]);
    }
    
    ordenarMatriz(B, tamanho);
    
    for(int i = 0; i < tamanho; i++) {
        C[i] = A[i] + B[i];
    }
    
    ordenarMatriz(C, tamanho);
    
    printf("Matriz C ordenada: \n");
    exibirMatriz(C, tamanho);
    
    return 0;
}

void ordenarMatriz(int matriz[], int tamanho) {
    int temp;
    for(int i = 0; i < tamanho - 1; i++) {
        for(int j = i + 1; j < tamanho; j++) {
            if(matriz[i] > matriz[j]) {
                temp = matriz[i];
                matriz[i] = matriz[j];
                matriz[j] = temp;
            }
        }
    }
}

void exibirMatriz(int matriz[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", matriz[i]);
    }
    printf("\n");
}
