#include <iostream>
using namespace std;

int main() {
    /*
    👉 Special Numeric Data Types in C++
    (jo pehle cover nahi kiye the)

    1) short       → small range integers (kam memory)
    2) long        → int se bade integers
    3) long long   → bahut bade integers (large storage)
    4) unsigned    → sirf positive numbers (negative ❌ allowed)
    5) long double → high precision floating point numbers
    */

    // -------------------- SHORT --------------------
    short teaSample = 250;
    /*
    - Size: usually 2 bytes
    - Range: -32,768 to 32,767
    - Agar iss range se bada number doge to ❌ overflow ho jayega.
      Example: short x = 40000; // invalid value
    */

    // -------------------- LONG --------------------
    long teaLeaves = 200000L;
    /*
    - Size: 4 bytes (sometimes 8 bytes system pe depend karta hai)
    - Range: approx -2 billion to +2 billion (ya bada if 8 bytes)
    - int se zyada bada number store kar sakta hai
    */

    // -------------------- LONG LONG --------------------
    long long largeTeaStorage = 9000000000;
    /*
    - Size: 8 bytes
    - Range: around -9e18 to +9e18 (bahut huge)
    - Badi values ke liye use hota hai (jaise population, big data storage)
    */

    // -------------------- UNSIGNED --------------------
    unsigned smallTeaPack = 1200;
    /*
    - Size: depends on int/short/long ke sath use karoge to
    - unsigned ka matlab: sirf positive numbers (0 to max)
    - Negative number ❌ allowed nahi hai
    - Agar diya toh strange output / wrap around ho jayega
    */

    // -------------------- LONG DOUBLE --------------------
    long double teaPrice = 123456789.123456789L;
    /*
    - Size: 10, 12, or 16 bytes (system/compiler pe depend karta hai)
    - Precision: ~18-19 digits tak accurate
    - Scientific calculations me zyada useful hota hai
    */

    // -------------------- OUTPUT --------------------
    cout << "short (teaSample): " << teaSample << endl;
    cout << "long (teaLeaves): " << teaLeaves << endl;
    cout << "long long (largeTeaStorage): " << largeTeaStorage << endl;
    cout << "unsigned (smallTeaPack): " << smallTeaPack << endl;
    cout << "long double (teaPrice): " << teaPrice << endl;

    return 0;
}
