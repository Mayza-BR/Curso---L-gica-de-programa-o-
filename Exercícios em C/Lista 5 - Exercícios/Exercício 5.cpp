//EX.5
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A[20], B[30], C[50];

    cout << "Digite os elementos da matriz A (20 elementos): " << endl;
    for (int i = 0; i < 20; i++) {
        cin >> A[i];
    }

    cout << "Digite os elementos da matriz B (30 elementos): " << endl;
    for (int i = 0; i < 30; i++) {
        cin >> B[i];
    }

   
    for (int i = 0; i < 20; i++) {
        C[i] = A[i];
    }
    for (int i = 0; i < 30; i++) {
        C[20 + i] = B[i];
    }

 
    sort(C, C + 50, greater<int>());

    cout << "Elementos da matriz C em ordem decrescente: ";
    for (int i = 0; i < 50; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
