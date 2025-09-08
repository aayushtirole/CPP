// Make a function which calculates "a" raised to the power "b" using recussion 

#include<iostream>
using namespace std;

// Recursive function to calculate a^b
int power(int a, int b) {
    // Base case: agar power (b) 0 ho toh result hamesha 1 hota hai
    // (Mathematics rule: a^0 = 1 for any a ≠ 0)
    if (b == 0) return 1;  
    
    // Recursive case:
    // Har step mein ek 'a' multiply hota hai aur power 1 kam ho jati hai
    // Example: power(2, 5) = 2 * power(2, 4)
    return a * power(a, b - 1);    
}

int main() {
    int a; // base number
    cout << "Enter base: ";
    cin >> a;

    int b; // exponent (power)
    cout << "Enter power: ";
    cin >> b;

    // power(a, b) function ko call kar rahe hain aur result print kar rahe hain
    cout << "Result = " << power(a, b);

    return 0;
}