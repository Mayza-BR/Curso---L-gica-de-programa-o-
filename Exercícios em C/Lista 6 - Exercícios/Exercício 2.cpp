//EX.2
#include <iostream>

using namespace std;

int main() {
    int A[7], B[7], C[7][2];

    cout << "Digite os elementos da matriz A (7 elementos):" << endl;
    for (int i = 0; i < 7; i++) {
        cin >> A[i];
    }

    cout << "Digite os elementos da matriz B (7 elementos):" << endl;
    for (int i = 0; i < 7; i++) {
        cin >> B[i];
    }

    for (int i = 0; i < 7; i++) {
        C[i][0] = A[i];
        C[i][1] = B[i];
    }

    cout << "Matriz C (1ª coluna de A e 2ª coluna de B):" << endl;
    for (int i = 0; i < 7; i++) {
        cout << C[i][0] << " " << C[i][1] << endl;
    }

    return 0;
}
