//EX.6
#include <stdio.h>

long cubo(int n) {
    return (long)n * n * n;
}

int pesquisar(long B[], int tamanho, long valor) {
    for (int i = 0; i < tamanho; i++) {
        if (B[i] == valor) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int A[30];
    long B[30];
    long valor;
    int posicao;

    for (int i = 0; i < 30; i++) {
        printf("Digite o elemento %d da matriz A: ", i + 1);
        scanf("%d", &A[i]);
        B[i] = cubo(A[i]);
    }

    printf("Digite um valor para pesquisar na matriz B: ");
    scanf("%ld", &valor);

    posicao = pesquisar(B, 30, valor);

    if (posicao != -1) {
        printf("Elemento %ld encontrado na posição %d da matriz B.\n", valor, posicao + 1);
    } else {
        printf("Elemento %ld não encontrado na matriz B.\n", valor);
    }

    return 0;
}
