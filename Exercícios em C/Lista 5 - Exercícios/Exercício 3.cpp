//EX.3#include <stdio.h>

long fatorial(int n) {
    long f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

void ordenar(long arr[], int n) {
    long temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int A[15];
    long B[15];
    
    for (int i = 0; i < 15; i++) {
        printf("Digite o elemento %d da matriz A: ", i + 1);
        scanf("%d", &A[i]);
        B[i] = fatorial(A[i]);
    }

    ordenar(B, 15);

    printf("Matriz B com os fatoriais ordenados em ordem crescente: ");
    for (int i = 0; i < 15; i++) {
        printf("%ld ", B[i]);
    }
    printf("\n");

    return 0;
}
