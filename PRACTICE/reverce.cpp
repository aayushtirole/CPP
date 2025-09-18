#include<iostream>
using namespace std;

int main() {
    int n, reverse = 0, remainder;
    cout << "Enter the number: ";
    cin >> n;

    int temp = n; // original number store karne ke liye

    // Loop jab tak n > 0
    // while (n > 0) {
    //     remainder = n % 10;            // last digit nikaalo
    //     reverse = (reverse * 10) + remainder; // reverse number banate jao
    //     n = n / 10;                    // ek digit hata do
    // }

       // for loop ka use karke reverse nikalna
    for (; n > 0; n = n / 10) {
        remainder = n % 10;                  // last digit nikaalo
        reverse = (reverse * 10) + remainder;  // reverse number banate jao
    }

    cout << "The reverse number of " << temp << " is: " << reverse;

    return 0;
}
