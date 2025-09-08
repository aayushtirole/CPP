// Multiple call 
// write a function to calculate the nth fibonacci number using recursion 

#include<iostream>
using namespace std;

// Recursive function to calculate nth Fibonacci number
int fib(int n) {
    // Base case 1: if n == 0, return 0
    if (n == 0) return 0;
    // Base case 2: if n == 1, return 1
    if (n == 1) return 1;

    // Recursive case: sum of previous two Fibonacci numbers
    // fib(n-1) -> calculates the (n-1)th Fibonacci number
    // fib(n-2) -> calculates the (n-2)th Fibonacci number
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Enter how many terms of Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++) {
        // Print each Fibonacci number by calling the recursive function
        cout << fib(i) << " ";
    }

    return 0;
}
