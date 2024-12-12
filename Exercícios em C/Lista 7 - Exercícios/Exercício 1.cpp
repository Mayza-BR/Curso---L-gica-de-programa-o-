//EX.1
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Registro {
    string nome;
    string endereco;
    int idade;
    string telefone;
};

void cadastrar(vector<Registro>& agenda) {
    Registro novoRegistro;
    cout << "Digite o nome: ";
    cin.ignore();
    getline(cin, novoRegistro.nome);
    cout << "Digite o endereco: ";
    getline(cin, novoRegistro.endereco);
    cout << "Digite a idade: ";
    cin >> novoRegistro.idade;
    cout << "Digite o telefone: ";
    cin.ignore();
    getline(cin, novoRegistro.telefone);

    agenda.push_back(novoRegistro);
    cout << "Cadastro realizado com sucesso!\n";
}

void pesquisarPorIdade(const vector<Registro>& agenda) {
    int idade;
    cout << "Digite a idade para pesquisa: ";
    cin >> idade;
    bool encontrado = false;

    for (const auto& registro : agenda) {
        if (registro.idade == idade) {
            cout << "Nome: " << registro.nome << "\n";
            cout << "Endereco: " << registro.endereco << "\n";
            cout << "Telefone: " << registro.telefone << "\n";
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "Nenhum registro encontrado com essa idade.\n";
    }
}

void classificarAlfabetica(vector<Registro>& agenda) {
    sort(agenda.begin(), agenda.end(), [](const Registro& a, const Registro& b) {
        return a.nome < b.nome;
    });
    cout << "Registros classificados por ordem alfabetica:\n";
    for (const auto& registro : agenda) {
        cout << "Nome: " << registro.nome << "\n";
        cout << "Endereco: " << registro.endereco << "\n";
        cout << "Idade: " << registro.idade << "\n";
        cout << "Telefone: " << registro.telefone << "\n";
    }
}

void alterarRegistro(vector<Registro>& agenda) {
    string nome;
    cout << "Digite o nome do registro que deseja alterar: ";
    cin.ignore();
    getline(cin, nome);
    bool encontrado = false;

    for (auto& registro : agenda) {
        if (registro.nome == nome) {
            cout << "Registro encontrado. Digite os novos dados:\n";
            cout << "Novo endereco: ";
            getline(cin, registro.endereco);
            cout << "Nova idade: ";
            cin >> registro.idade;
            cout << "Novo telefone: ";
            cin.ignore();
            getline(cin, registro.telefone);
            cout << "Registro atualizado com sucesso!\n";
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Registro nao encontrado.\n";
    }
}

int main() {
    vector<Registro> agenda;
    int opcao;

    do {
        cout << "Menu da Agenda:\n";
        cout << "1 - Cadastro\n";
        cout << "2 - Pesquisa de registro por idade\n";
        cout << "3 - Classificacao alfabetica\n";
        cout << "4 - Alteracao de registro digitado com erro\n";
        cout << "5 - Sair do Menu\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrar(agenda);
                break;
            case 2:
                pesquisarPorIdade(agenda);
                break;
            case 3:
                classificarAlfabetica(agenda);
                break;
            case 4:
                alterarRegistro(agenda);
                break;
            case 5:
                cout << "Saindo do programa.\n";
                break;
            default:
                cout << "Opcao invalida. Tente novamente.\n";
        }

        cout << "\n";
    } while (opcao != 5);

    return 0;
}
