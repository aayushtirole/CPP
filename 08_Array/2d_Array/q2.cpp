// Maximum number of an array 

#include <iostream>
#include <climits>   // for INT_MIN
using namespace std;

int main() {
    int matrix[4][2] = {  
        {1, 85},   
        {2, 90}, 
        {3, 78},  
        {4, 92}   
    };

    int mx = INT_MIN; // sabse chhota integer value se start karenge

    // traverse matrix
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 2; j++) {
            mx = max(mx, matrix[i][j]);  // maximum value update
        }
    }

    cout << "Maximum value in matrix = " << mx << endl;

    return 0;
}
