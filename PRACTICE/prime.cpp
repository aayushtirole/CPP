#include<iostream>
using namespace std;

int main() {
    int n, count = 0;  // 'n' input number, 'count' divisors ko count karega

    cout << "Enter Number for checking prime or not: ";
    cin >> n;  // user se number input lena

    // Loop 1 se lekar n tak chalega aur har number ko check karega ki kya n usse divide hota hai
    for (int j = 1; j <= n; j++) {
        if (n % j == 0) {  
            // agar remainder 0 hai, matlab 'j' ek divisor hai
            count++;  // divisor milne par count badha do
        }
    }

    // Prime number ke liye sirf do divisors hone chahiye → 1 aur number khud
    if (count == 2) {
        cout << "Number is Prime";  
    } else {
        cout << "Number is Not Prime";
    }

    return 0;  
}
