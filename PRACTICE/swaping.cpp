#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;

    cout << "\nBefore swapping: a = " << a << ", b = " << b << endl;

    // swapping using third variable
    // temp = a;
    // a = b;
    // b = temp;

     // swapping without third variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping:  a = " << a << ", b = " << b << endl;

    return 0;
}
