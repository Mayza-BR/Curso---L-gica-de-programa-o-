//EX 1.B
#include <stdio.h>
#include <string.h>

#define MAX 20

typedef struct {
    char nome[50];
    float notas[4];
    float media;
} Aluno;

Aluno alunos[MAX];
int total = 0;

void cadastrar() {
    for (int i = 0; i < MAX; i++) {
        printf("Digite o nome do aluno: ");
        scanf(" %[^"]s", alunos[i].nome);
        float soma = 0;
        for (int j = 0; j < 4; j++) {
            printf("Digite a nota %d: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
            soma += alunos[i].notas[j];
        }
        alunos[i].media = soma / 4;
        total++;
    }
}

void classificar() {
    Aluno temp;
    for (int i = 0; i < total - 1; i++) {
        for (int j = i + 1; j < total; j++) {
            if (strcmp(alunos[i].nome, alunos[j].nome) > 0) {
                temp = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = temp;
            }
        }
    }
    printf("Alunos classificados por ordem alfabetica\n");
}

void corrigir() {
    char nome[50];
    int encontrado = 0;
    printf("Digite o nome do aluno para corrigir: ");
    scanf(" %[^"]s", nome);
    for (int i = 0; i < total; i++) {
        if (strcmp(alunos[i].nome, nome) == 0) {
            printf("Digite as novas notas:\n");
            float soma = 0;
            for (int j = 0; j < 4; j++) {
                printf("Nota %d: ", j + 1);
                scanf("%f", &alunos[i].notas[j]);
                soma += alunos[i].notas[j];
            }
            alunos[i].media = soma / 4;
            printf("Dados corrigidos\n");
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Aluno nao encontrado\n");
    }
}

void pesquisar() {
    char nome[50];
    int encontrado = 0;
    printf("Digite o nome do aluno para pesquisa: ");
    scanf(" %[^"]s", nome);
    for (int i = 0; i < total; i++) {
        if (strcmp(alunos[i].nome, nome) == 0) {
            printf("Nome: %s\n", alunos[i].nome);
            printf("Media: %.2f\n", alunos[i].media);
            encontrado = 1;
        }
    }
    if (!encontrado) {
        printf("Aluno nao encontrado\n");
    }
}

void listar_aprovados() {
    printf("Alunos aprovados:\n");
    for (int i = 0; i < total; i++) {
        if (alunos[i].media >= 7.0) {
            printf("Nome: %s, Media: %.2f\n", alunos[i].nome, alunos[i].media);
        }
    }
}

void listar_reprovados() {
    printf("Alunos reprovados:\n");
    for (int i = 0; i < total; i++) {
        if (alunos[i].media < 7.0) {
            printf("Nome: %s, Media: %.2f\n", alunos[i].nome, alunos[i].media);
        }
    }
}

int main() {
    int opcao;
    do {
        printf("Menu:\n");
        printf("1 - Cadastrar alunos\n");
        printf("2 - Classificar alunos\n");
        printf("3 - Corrigir dados\n");
        printf("4 - Pesquisar aluno\n");
        printf("5 - Listar aprovados\n");
        printf("6 - Listar reprovados\n");
        printf("7 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar();
                break;
            case 2:
                classificar();
                break;
            case 3:
                corrigir();
                break;
            case 4:
                pesquisar();
                break;
            case 5:
                listar_aprovados();
                break;
            case 6:
                listar_reprovados();
                break;
            case 7:
                printf("Saindo do programa\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while (opcao != 7);

    return 0;
}
