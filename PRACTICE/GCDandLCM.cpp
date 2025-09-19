#include <iostream> // Required for input/output operations

using namespace std; // To avoid writing 'std::' everywhere

int main() {
    int num1, num2;     // User se input lene ke liye
    int a, b;           // GCD calculation ke liye copies
    int temp;           // Remainder ya swapping ke liye
    int gcd_val;        // GCD ka final result
    long long lcm_val;  // LCM ka final result (overflow se bachne ke liye long long)

    cout << "Enter the first number: "; // Pehla number enter karne ke liye prompt
    cin >> num1;                     // User se pehla number input lena

    cout << "Enter the second number: "; // Dusra number enter karne ke liye prompt
    cin >> num2;                     // User se dusra number input lena

    // Create copies of original numbers for GCD calculation
    // Taaki asli numbers LCM ke liye available rahein
    a = num1;
    b = num2;

    // Convert numbers to positive, as GCD/LCM are typically defined for positive values
    // Agar koi number negative hai, toh use positive kar dete hain
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    // --- Loop to calculate GCD (Greatest Common Divisor) ---
    // This loop uses the Euclidean Algorithm.
    // Jab tak b zero nahi hota, tab tak loop chalta rahega.
    for ( ; b != 0; ) {
        temp = b;       // b ki current value ko temp mein save kiya
        b = a % b;      // a ko b se divide karke remainder nikala, aur use naya b banaya
        a = temp;       // purana b (jo temp mein tha) ab naya a ban gaya
    }
    gcd_val = a; // Loop khatam hone par, a mein GCD store hoga

    cout << "The GCD (Greatest Common Divisor) of " << num1 << " and " << num2 << " is: " << gcd_val << endl;

    // --- Calculate LCM (Least Common Multiple) ---
    // Formula: LCM = (|num1 * num2|) / GCD
    // long long cast isliye kiya hai taaki bade numbers ke product mein overflow na ho.
    lcm_val = (static_cast<long long>(num1) * num2) / gcd_val;

    cout << "The LCM (Least Common Multiple) of " << num1 << " and " << num2 << " is: " << lcm_val << endl;

    return 0; 
}