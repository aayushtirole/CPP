#include<iostream>
using namespace std;

int main() {
    int n, reverse = 0, remainder;
    cout << "Enter the number: ";
    cin >> n;

    int temp = n; // original number ko store karenge

    // Number ko reverse karna
    for (; n > 0; n = n / 10) {
        remainder = n % 10;                  // last digit nikaalo
        reverse = reverse * 10 + remainder;  // reverse number banate jao
    }

    // Palindrome check
    if (temp == reverse) {
        cout << temp << " is a Palindrome number.";
    } else {
        cout << temp << " is NOT a Palindrome number.";
    }

    return 0;
}
