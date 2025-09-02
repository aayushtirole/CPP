#include <iostream>
using namespace std;

int main() {
    /*
    👉 Variables in C++
    -------------------
    - Variable ek container hota hai jo memory me data store karta hai.
    - Variable ka ek "name" hota hai (identifier) jisse hum usse access karte hain.
    - Variable ke liye hume "data type" define karna padta hai jaise int, float, char etc.
    - Variable ke value ko hum program ke andar change/update kar sakte hain.
    */

    // Example of variables
    int age = 21;       // 'int' type variable -> integer value store karega
    float pi = 3.14;    // 'float' type variable -> decimal value store karega
    char grade = 'A';   // 'char' type variable -> ek character store karega
    string name = "Aayush"; // 'string' type variable -> text store karega

    // Printing variables
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Grade: " << grade << endl;
    cout << "Pi value: " << pi << endl;

    /*
    👉 Constants in C++
    -------------------
    - Constant ek aisi value hai jo program ke dauraan change nahi ho sakti.
    - Matlab ek baar assign karne ke baad uski value fix ho jaati hai.
    - Constant declare karne ke liye 'const' keyword use hota hai.
    - Agar constant ki value ko change karne ki try karoge toh compiler error dega.
    */

    // Example of constant
    const float gravity = 9.8;  // constant variable
    cout << "Gravity: " << gravity << endl;

    // gravity = 10.0; // ❌ Error: constants ki value change nahi hoti

    /*
    👉 Difference between Variable and Constant
    -------------------------------------------
    1) Variable: value change ho sakti hai.
       Constant: value fix hoti hai, change nahi hoti.
    
    2) Variable: sirf data type likhna hota hai.
       Constant: data type ke aage 'const' keyword likhna hota hai.
    
    3) Variable example -> int marks = 80;
       Constant example -> const int maxMarks = 100;
    */

    // Variable example: change possible
    int score = 50;
    cout << "Score: " << score << endl;
    score = 75; // value change ki
    cout << "Updated Score: " << score << endl;

    // Constant example: change not possible
    const int maxScore = 100;
    cout << "Maximum Score allowed: " << maxScore << endl;
    // maxScore = 120;  // ❌ Error

    return 0;
}
