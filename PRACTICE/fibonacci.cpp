#include<iostream>
using namespace std;

// Function to calculate nth Fibonacci number using recursion
int fibonacci(int n) {
    // Base cases: agar n == 0 ya n == 1 hai toh directly return kardo
    if (n == 0) return 0;  // 0th Fibonacci number hamesha 0 hota hai
    if (n == 1) return 1;  // 1st Fibonacci number hamesha 1 hota hai

    // Recursive case:
    // nth Fibonacci number = (n-1)th + (n-2)th
    // Yaha function khud ko call karega aur result return karega
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> n;  // user se kitne terms chahiye wo input lena

    cout << "Fibonacci Series: ";

    // Loop chalayenge aur har index i ke liye fibonacci(i) print karenge
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";  // har term print hoga
    }

    return 0;  // program successful execution ke baad end hoga
}
