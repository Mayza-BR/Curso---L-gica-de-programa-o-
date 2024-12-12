//EX 2.D
#include <stdio.h>
#include <math.h>

void calcularPotencia(int base, int potencia);

int main() {
    int base, potencia;
    
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite a potencia: ");
    scanf("%d", &potencia);
    
    calcularPotencia(base, potencia);
    
    return 0;
}

void calcularPotencia(int base, int potencia) {
    int resultado = pow(base, potencia);
    printf("O resultado de %d elevado a %d é: %d\n", base, potencia, resultado);
}
