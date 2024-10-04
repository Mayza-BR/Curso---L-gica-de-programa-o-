#include <stdio.h>
#include <math.h>

// Função segundograu EX.1
void equacao_segundo_grau(double a, double b, double c) {
    double delta = b*b - 4*a*c;

    if (delta < 0) {
        printf("Sem raizes reais.\n");
    } else if (delta == 0) {
        double raiz = -b / (2*a);
        printf("Raiz unica: %.2f\n", raiz);
    } else {
        double raiz1 = (-b + sqrt(delta)) / (2*a);
        double raiz2 = (-b - sqrt(delta)) / (2*a);
        printf("Sao as Raizes: %.2f e %.2f\n", raiz1, raiz2);
    }
}

// Função Soma EX.2
int soma(int x, int y) {
    return x + y;
}

// Função Par EX.3
int pares(int numero) {
    return (numero % 2 == 0);
}

// Função Fatorial EX.4
int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

// Função  NumeroPrimo EX.5
int primo(int numero) {
    if (numero <= 1) return 0;
    for (int i = 2; i <= sqrt(numero); i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    // Teste EquaçãoSegundoFrau EX.1
    printf("Equacao de segundo grau (a=1, b=-3, c=2):\n");
    equacao_segundo_grau(1, -3, 2);

    // Testaesoma EX.2
    printf("\nSoma de 5 e 7: %d\n", soma(5, 7));

    // Teste Par EX.3
    printf("\nNumero 8 e par? %s\n", pares(8) ? "Sim" : "Nao");

    // Teste Fatorial EX.4
    printf("\nFatorial de 5: %d\n", fatorial(5));

    // Teste NumeroPrimo EX.5
    printf("\nNumero 11 e primo? %s\n", primo(11) ? "Sim" : "Nao");

    return 0;
}