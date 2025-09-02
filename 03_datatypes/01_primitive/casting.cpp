#include <iostream>   // Input-Output stream library include kar rahe hain
using namespace std;  // std:: likhne se bachne ke liye

int main() {
    // ---------------- FLOAT ----------------
    float teaPrice = 49.99;
    /*
    - "float" ek floating-point data type hai, jo decimal numbers store karta hai.
    - Example: 49.99
    - Lekin dhyaan do: float me accuracy limited hoti hai (~6-7 decimal digits).
    */

    // ---------------- TYPE CASTING ----------------
    int roundedTeaPrice = (int) teaPrice;
    /*
    - (int) teaPrice -> Explicit Type Casting
    - teaPrice ki value 49.99 ko integer me convert karega.
    - Decimal part (0.99) truncate ho jata hai, round nahi hota.
    - Is case me: 49.99 → 49
    */

    // ---------------- MULTIPLICATION ----------------
    int teaQuantity = 2;
    /*
    - Tea ke packet ki quantity store karne ke liye int use hua.
    */

    int totalPrice = teaPrice * teaQuantity;
    /*
    - teaPrice (float) * teaQuantity (int) = result hamesha float hoga
    - Lekin hum ise "int totalPrice" me store kar rahe hain.
    - Is wajah se decimal truncate ho jayega (sirf integer part save hoga).
    - Example: 49.99 * 2 = 99.98 → int me store hua = 99
    */

    // ---------------- OUTPUT ----------------
    cout << totalPrice << endl;
    /*
    - Console par "99" print karega
    - Kyunki float result ko int variable me daalne se decimal part truncate ho gaya
    */

    return 0; // Program successful execution
}
