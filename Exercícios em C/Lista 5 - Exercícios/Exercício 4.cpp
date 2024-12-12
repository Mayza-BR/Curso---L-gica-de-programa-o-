//EX.4
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A[12], B[12], C[12];
    
    cout << "Digite os elementos da matriz A (12 elementos): " << endl;
    for (int i = 0; i < 12; i++) {
        cin >> A[i];
    }

    cout << "Digite os elementos da matriz B (12 elementos): " << endl;
    for (int i = 0; i < 12; i++) {
        cin >> B[i];
    }

    sort(A, A + 12);
    sort(B, B + 12);

    for (int i = 0; i < 12; i++) {
        C[i] = A[i] + B[i];
    }

    sort(C, C + 12);

    cout << "Matriz C (ordenada): ";
    for (int i = 0; i < 12; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
