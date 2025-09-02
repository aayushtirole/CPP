#include <iostream>   // 👉 Yeh ek header file hai jo input-output ke functions provide karti hai.
// "iostream" ka matlab hai "input-output stream"
// Stream = ek tarika jisse data flow hota hai (input stream = keyboard se data lena, output stream = screen pe print karna)

using namespace std;  
/*
👉 "using namespace std;" ka matlab hai hum C++ ke "standard namespace" ko use kar rahe hain.
- C++ ke andar har ek function aur object (like cout, cin, endl) ek namespace ke andar defined hote hain.
- "std" ek namespace hai jisme standard library ke functions, classes, aur objects defined hote hain.
- Agar hum "using namespace std;" nahi likhte toh hume har jagah "std::" lagana padta.
   Example:
      std::cout << "Hello";
      std::endl;
   Iske bina direct "cout" ya "endl" likhne se error aata.
*/

int main() {  
    // 👉 main function: program execution yahi se start hota hai
    // Har C++ program ke liye ek "main()" function compulsory hota hai.
    // Compiler sabse pehle isi function ko call karta hai.

    cout << "Hello, World!" << endl;  
    /*
    👉 cout
    - "cout" ka matlab hai "character output".
    - Yeh ek object hai jo screen (console) par data print karta hai.
    - Yeh "iostream" header file ke andar defined hai.
    
    👉 << (insertion operator / put-to operator)
    - Is operator ka use hota hai data ko output stream (cout) me dalne ke liye.
    - Example: cout << "Hello";
      Matlab "Hello" string ko cout ke through console me bhejna.

    👉 endl
    - "endl" ek manipulator hai jo output ke baad "new line" (next line) add karta hai.
    - Matlab cursor agle line pe chala jayega.
    - Yeh bhi std namespace me defined hai.
    
    👉 Agar "using namespace std;" na likhen toh line aise likhni padegi:
       std::cout << "Hello, World!" << std::endl;
    
    👉 "std::"
    - "::" ko "scope resolution operator" kehte hain.
    - Yeh batata hai ki jo cheez use kar rahe ho (cout/endl) wo "std" namespace ke andar defined hai.
    */

    return 0;  
    /*
    👉 return 0;
    - Iska matlab hai program successfully execute ho gaya.
    - "0" ek status code hota hai jo operating system ko batata hai ki program bina error ke run hua.
    - Agar hum non-zero value return karte hain toh iska matlab hota hai error hua.
    */
}
