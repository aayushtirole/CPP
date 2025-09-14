// Make a function which calculates "a" raised to the power "b" using recussion 

#include<iostream>
using namespace std;

// Recursive fast exponentiation function
long long power(long long a, long long b) {
    // Base case: anything power 0 is 1
    if (b == 0) return 1;

    // Recursive case: calculate half power
    long long half = power(a, b / 2);

    // Agar b even hai
    if (b % 2 == 0) {
        return half * half;
    } 
    // Agar b odd hai
    else {
        return a * half * half;
    }
}

int main() {
    long long a, b;
    cout << "Enter base: ";
    cin >> a;
    cout << "Enter power: ";
    cin >> b;

    // Edge case: negative power
    if (b < 0) {
        cout << "Error: Negative power not supported with this integer function!" << endl;
        return 0;
    }

    cout << a << "^" << b << " = " << power(a, b) << endl;
    return 0;
}
