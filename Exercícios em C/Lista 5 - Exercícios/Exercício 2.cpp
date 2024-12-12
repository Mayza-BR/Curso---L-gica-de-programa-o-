//EX.2#include <stdio.h>

void ordenar(int arr[], int tamanho) {
    int i, j, temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int A[8], B[8], i, chave, encontrado;

    for (i = 0; i < 8; i++) {
        printf("Digite o elemento %d da matriz A: ", i + 1);
        scanf("%d", &A[i]);
        B[i] = A[i] * 5;
    }

    ordenar(B, 8);

    printf("Matriz B ordenada em ordem crescente: ");
    for (i = 0; i < 8; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    printf("Digite um valor para pesquisar na matriz B: ");
    scanf("%d", &chave);

    encontrado = 0;
    for (i = 0; i < 8; i++) {
        if (B[i] == chave) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("Elemento encontrado na posição %d da matriz B.\n", i + 1);
    } else {
        printf("Elemento não encontrado na matriz B.\n");
    }

    return 0;
}
