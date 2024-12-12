//EX.1
#include <iostream>

using namespace std;

int main() {
    int A[5][3], B[5][3], C[5][3];

    cout << "Digite os elementos da matriz A (5 linhas e 3 colunas):" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Digite os elementos da matriz B (5 linhas e 3 colunas):" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Matriz C (soma de A e B):" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
