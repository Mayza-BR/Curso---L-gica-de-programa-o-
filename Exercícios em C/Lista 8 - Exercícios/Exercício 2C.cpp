//EX 2.C
#include <stdio.h>

float calcularPrestacao(float valor, float taxa, int tempo);

int main() {
    float valor, taxa, prestacao;
    int tempo;
    
    printf("Digite o valor da prestacao: ");
    scanf("%f", &valor);
    printf("Digite a taxa de juros (em %%): ");
    scanf("%f", &taxa);
    printf("Digite o tempo em meses: ");
    scanf("%d", &tempo);
    
    prestacao = calcularPrestacao(valor, taxa, tempo);
    
    printf("O valor da prestacao em atraso é: %.2f\n", prestacao);
    
    return 0;
}

float calcularPrestacao(float valor, float taxa, int tempo) {
    return valor + (valor * (taxa / 100) * tempo);
}
