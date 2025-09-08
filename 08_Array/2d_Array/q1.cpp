// Write a program to store roll number and marks obtained by 4 students side by side in a matrix


#include<iostream>
using namespace std;

int main(){

    // 4 rows (students), 2 columns (roll no & marks)
    int matrix[4][2] = {  
        {1, 85},   // Roll No = 1, Marks = 85
        {2, 90},   // Roll No = 2, Marks = 90
        {3, 78},   // Roll No = 3, Marks = 78
        {4, 92}    // Roll No = 4, Marks = 92
    };

    // Printing the matrix
    cout << "RollNo  Marks" << endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matrix[i][j] << "   ";
        }
        cout << endl;
    }

    return 0;
}
