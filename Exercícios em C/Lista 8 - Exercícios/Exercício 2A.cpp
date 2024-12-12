//EX.2.A
#include <stdio.h>

int somatorio(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int n;
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    
    int resultado = somatorio(n);
    printf("O somatorio dos %d primeiros numeros e: %d\n", n, resultado);

    return 0;
}
