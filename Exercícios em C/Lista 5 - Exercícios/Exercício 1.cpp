//EX.1
#include <stdio.h>

int main() {
    int vetor[12], i, j, temp;

    for (i = 0; i < 12; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 12 - 1; i++) {
        for (j = i + 1; j < 12; j++) {
            if (vetor[i] < vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    printf("Elementos ordenados em ordem decrescente: ");
    for (i = 0; i < 12; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
