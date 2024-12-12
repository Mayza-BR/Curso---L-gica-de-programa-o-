//EX 1.A
} Registro;

Registro agenda[MAX];
int total = 0;

void cadastrar() {
    if (total < MAX) {
        printf("Digite o nome: ");
        scanf(" %[^"]s", agenda[total].nome);
        printf("Digite o endereco: ");
        scanf(" %[^"]s", agenda[total].endereco);
        printf("Digite o email: ");
        scanf(" %[^"]s", agenda[total].email);
        printf("Digite o telefone: ");
        scanf(" %[^"]s", agenda[total].telefone);
        total++;
    } else {
        printf("Agenda cheia\n");
    }
}

void pesquisar() {
    char nome[50];
    int encontrado = 0;
    printf("Digite o nome para pesquisa: ");
    scanf(" %[^"]s", nome);
    for (int i = 0; i < total; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            printf("Nome: %s\n", agenda[i].nome);
            printf("Endereco: %s\n", agenda[i].endereco);
            printf("Email: %s\n", agenda[i].email);
            printf("Telefone: %s\n", agenda[i].telefone);
            encontrado = 1;
        }
    }
    if (!encontrado) {
        printf("Registro nao encontrado\n");
    }
}

void classificar() {
    Registro temp;
    for (int i = 0; i < total - 1; i++) {
        for (int j = i + 1; j < total; j++) {
            if (strcmp(agenda[i].nome, agenda[j].nome) > 0) {
                temp = agenda[i];
                agenda[i] = agenda[j];
                agenda[j] = temp;
            }
        }
    }
    printf("Registros classificados por ordem alfabetica\n");
}

void alterar() {
    char nome[50];
    int encontrado = 0;
    printf("Digite o nome do registro que deseja alterar: ");
    scanf(" %[^"]s", nome);
    for (int i = 0; i < total; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            printf("Digite o novo endereco: ");
            scanf(" %[^"]s", agenda[i].endereco);
            printf("Digite o novo email: ");
            scanf(" %[^"]s", agenda[i].email);
            printf("Digite o novo telefone: ");
            scanf(" %[^"]s", agenda[i].telefone);
            printf("Registro atualizado\n");
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Registro nao encontrado\n");
    }
}

void remover() {
    char nome[50];
    int encontrado = 0;
    printf("Digite o nome do registro que deseja remover: ");
    scanf(" %[^"]s", nome);
    for (int i = 0; i < total; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            for (int j = i; j < total - 1; j++) {
                agenda[j] = agenda[j + 1];
            }
            total--;
            printf("Registro removido\n");
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Registro nao encontrado\n");
    }
}

int main() {
    int opcao;
    do {
        printf("Menu da Agenda:\n");
        printf("1 - Cadastrar\n");
        printf("2 - Pesquisar\n");
        printf("3 - Classificar\n");
        printf("4 - Alterar\n");
        printf("5 - Remover\n");
        printf("6 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar();
                break;
            case 2:
                pesquisar();
                break;
            case 3:
                classificar();
                break;
            case 4:
                alterar();
                break;
            case 5:
                remover();
                break;
            case 6:
                printf("Saindo do programa\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while (opcao != 6);

    return 0;
}