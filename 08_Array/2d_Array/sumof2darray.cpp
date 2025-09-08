// write a program to add two matrices 

#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Step 1: Matrix size input
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int A[100][100], B[100][100], C[100][100]; // matrices

    // Step 2: Input elements of Matrix A
    cout << "Enter elements of Matrix A:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }

    // Step 3: Input elements of Matrix B
    cout << "Enter elements of Matrix B:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> B[i][j];
        }
    }

    // Step 4: Matrix Addition -> C = A + B
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Step 5: Print Resultant Matrix
    cout << "Resultant Matrix (A + B):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
