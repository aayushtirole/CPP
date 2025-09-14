// Program: Print sum from 1 to N using Recursion (Return Type)

#include<iostream>
using namespace std;

// Recursive function with return type
int sum(int n) {
    // Base case: agar n == 1 hai to direct 1 return karo
    if (n == 1) return 1;

    // Recursive case: current n ko add karo aur (n-1) ka sum nikalne ke liye function call karo
    return n + sum(n - 1);
}

int main() {
    int n;

    // Step 1: Input lena
    cout << "Enter n: ";
    cin >> n;

    // Step 2: Function call and store result
    int result = sum(n);

    // Step 3: Print the final result
    cout << "Sum = " << result << endl;

    return 0;
}
