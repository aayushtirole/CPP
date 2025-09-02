#include <iostream>   // Input/Output ke liye header file
#include <string>     // string data type use karne ke liye
using namespace std;

int main() {
    /*
    👉 Variables in C++:
    - Variables ek container hote hain jo memory me data store karte hain.
    - Har variable ke liye ek "data type" define karna padta hai jisse pata chale
      ki wo kis type ka data store karega (int, float, char, etc.)
    - Har data type ki apni limitations aur rules hote hain.
    */

    // -------------------- INT --------------------
    int tealeaves = 30;  
    /*
    - 'int' (integer) data type hai jo sirf whole numbers store karta hai.
    - Example: -5, 0, 10, 200
    - Agar tum decimal doge to wo truncate ho jayega (cut ho kar int ban jayega).
      Example: int x = 10.5;  // ❌ x = 10 ban jayega
    */
    cout << "Tea Leaves (int): " << tealeaves << endl;

    // -------------------- FLOAT --------------------
    float temperature = 85.5f;  
    /*
    - 'float' fractional/decimal values store karta hai (approx 7 digits precision).
    - Agar tum bahut badi exact value store karoge to thoda rounding error aa sakta hai.
    - 'f' lagana optional hai but recommend kiya jata hai.
    */
    cout << "Temperature (float): " << temperature << endl;

    // -------------------- DOUBLE --------------------
    double priceOfTea = 299.99;  
    /*
    - 'double' bhi decimal values store karta hai lekin float ke double precision ke sath (~15 digits tak accurate).
    - Large ya scientific calculations ke liye double better hota hai.
    */
    cout << "Price of Tea (double): " << priceOfTea << endl;

    // -------------------- CHAR --------------------
    char teaGrade = 'A';  
    /*
    - 'char' ek single character store karta hai (hamesha single quotes ' ' me).
    - Example: 'A', 'b', '5'
    - Agar tum ek se zyada characters doge to ❌ error aayega:
      char c = 'AB'; // invalid
    */
    cout << "Tea Grade (char): " << teaGrade << endl;

    // -------------------- BOOL --------------------
    bool isTeaReady = false;  
    /*
    - 'bool' sirf do values store karta hai -> true (1) ya false (0).
    - Agar koi non-zero number assign karoge to automatically true ho jayega.
      Example:
         bool x = 5;  // true (1)
         bool y = 0;  // false (0)
    */
    cout << "Is Tea Ready? (bool): " << isTeaReady << endl;
    // Output me "false" ka matlab "0" print hoga aur "true" ka matlab "1".

    // -------------------- STRING --------------------
    string teaType = "Green Tea";  
    /*
    - 'string' multiple characters (words/sentences) store karta hai.
    - Iske liye double quotes " " use karte hain.
    - Agar single quotes ' ' use karoge to ❌ error aayega kyunki wo sirf char ke liye hain.
    */
    cout << "Tea Type (string): " << teaType << endl;

   

    return 0; // Program successfully run hone ka signal
}


