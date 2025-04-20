#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], sum[3][3], transA[3][3], transB[3][3], transSum[3][3];

    cout << "Enter elements of Matrix A (3x3):\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of Matrix B (3x3):\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }

    cout << "\nSum of Matrix A and B:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nTranspose of Matrix A:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            transA[j][i] = A[i][j];
            cout << transA[j][i] << " ";
        }
        cout << endl;
    }

    cout << "\nTranspose of Matrix B:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            transB[j][i] = B[i][j];
            cout << transB[j][i] << " ";
        }
        cout << endl;
    }

    cout << "\nSum of Transposed Matrices A and B:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            transSum[i][j] = transA[i][j] + transB[i][j];
            cout << transSum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
