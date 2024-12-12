//EX.7
#include <iostream>
#include <algorithm>

using namespace std;

int pesquisar(int B[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (B[i] == valor) {
            return i;
        }
    }
    return -1;
}

int main() {
    int A[20], B[20], valor, posicao;

    cout << "Digite os 20 elementos da matriz A: " << endl;
    for (int i = 0; i < 20; i++) {
        cin >> A[i];
        B[i] = A[i] + 2;
    }

    sort(B, B + 20);

    cout << "Matriz B ordenada: ";
    for (int i = 0; i < 20; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    cout << "Digite um valor para pesquisar na matriz B: ";
    cin >> valor;

    posicao = pesquisar(B, 20, valor);

    if (posicao != -1) {
        cout << "Elemento " << valor << " encontrado na posição " << posicao + 1 << " da matriz B." << endl;
    } else {
        cout << "Elemento " << valor << " não encontrado na matriz B." << endl;
    }

    return 0;
}
