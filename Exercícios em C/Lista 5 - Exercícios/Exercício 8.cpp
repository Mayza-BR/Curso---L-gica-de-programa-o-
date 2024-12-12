//EX.8
#include <iostream>
#include <algorithm>

using namespace std;

int pesquisar(float notas[], int tamanho, float nota) {
    for (int i = 0; i < tamanho; i++) {
        if (notas[i] == nota) {
            return i;
        }
    }
    return -1;
}

int main() {
    float notas[40], notaPesquisada;
    int posicao;

    cout << "Digite as notas dos 40 alunos: " << endl;
    for (int i = 0; i < 40; i++) {
        cin >> notas[i];
    }

    sort(notas, notas + 40);

    cout << "Notas ordenadas: ";
    for (int i = 0; i < 40; i++) {
        cout << notas[i] << " ";
    }
    cout << endl;

    cout << "Digite uma nota para pesquisar: ";
    cin >> notaPesquisada;

    posicao = pesquisar(notas, 40, notaPesquisada);

    if (posicao != -1) {
        cout << "Nota " << notaPesquisada << " encontrada na posição " << posicao + 1 << " da lista." << endl;
    } else {
        cout << "Nota " << notaPesquisada << " não encontrada." << endl;
    }

    return 0;
}
