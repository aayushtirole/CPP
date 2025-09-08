// Given a matrix a of dimention nxm  and 2 cordinates (l1,r1) and (l2,r2).return the sum of the rectangle from (l1,r1) to (l2,r2)

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of rows: ";
    cin >> n;                 // user se rows (n) input lete hain
    cout << "Enter number of columns: ";
    cin >> m;                 // user se columns (m) input lete hain

    int a[100][100];          // 2D array bana rahe hain jisme matrix store hoga
                              // yahan max size 100x100 tak hi ho sakta hai

    // Step 1: Input matrix elements
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {         // har row ke liye loop
        for (int j = 0; j < m; j++) {     // har column ke liye loop
            cin >> a[i][j];               // element input karke a[i][j] me store karte hain
        }
    }

    // Step 2: Input rectangle coordinates
    int l1, r1, l2, r2;
    cout << "Enter coordinates (l1 r1): ";
    cin >> l1 >> r1;          // rectangle ka top-left corner (row, col)
    cout << "Enter coordinates (l2 r2): ";
    cin >> l2 >> r2;          // rectangle ka bottom-right corner (row, col)

    // Step 3: Calculate sum of rectangle
    int sum = 0;
    for (int i = l1; i <= l2; i++) {        // rows l1 se l2 tak iterate karte hain
        for (int j = r1; j <= r2; j++) {    // columns r1 se r2 tak iterate karte hain
            sum += a[i][j];                 // har element ko sum me add karte hain
        }
    }

    // Step 4: Print result
    cout << "Sum of rectangle from (" << l1 << "," << r1 
         << ") to (" << l2 << "," << r2 << ") = " << sum << endl;

    return 0;
}
