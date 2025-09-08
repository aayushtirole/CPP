// Program: Print sum from 1 to N using Parameterised Recursion

#include<iostream>
using namespace std;

// Recursive function to calculate sum
void sum(int n, int s) {
    // Step 1: Base case check
    // Agar n == 0 hai, iska matlab hum 1 se N tak sab add kar chuke hain
    if (n == 0) {
        cout << "Sum = " << s << endl; // Final sum ko print karo
        return; // recursion ko yahin terminate kar do
    }

    // Step 2: Recursive call
    // Agar abhi tak base case nahi aaya, to current number (n) ko
    // sum (s) me add karo aur n-1 ke saath recursive call karo
    sum(n - 1, s + n);

    // Note: Yahan koi print nahi hai, kyunki hume sirf final answer chahiye
}

int main() {
    int n;

    // Step 1: Input lena
    cout << "Enter n : ";
    cin >> n;

    // Step 2: Function call
    // Initial call me sum = 0 pass karte hain (kuch bhi add nahi hua hai abhi tak)
    sum(n, 0);

    // Program end
}
