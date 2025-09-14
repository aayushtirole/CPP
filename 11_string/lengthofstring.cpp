#include <iostream>
using namespace std;

int main() {
    string s = "raghav";  
    
    /*
       🔹 Important Point:
       C++ ke `std::string` class internally ek array of characters rakhta hai
       aur string ke end me ek hidden '\0' (null character) bhi add karta hai
       taaki compatibility rahe C-style strings ke saath.

       Lekin:
       - s.length() ya s.size() sirf actual characters ko count karte hain
       - Null character ko count nahi karte
       
       Example:
       string s = "raghav";

       Memory representation (conceptually):
       
       Index:   0    1    2    3    4    5    6
       Value:  'r'  'a'  'g'  'h'  'a'  'v'  '\0'

       👉 Length/size = 6 (sirf 'r' se 'v' tak count hoga)
       👉 Null character `\0` memory me hota hai 
          par length() usse count nahi karta.
    */

    // string length (counts only visible characters)
    cout << "Using length(): " << s.length() << endl;  // Output: 6

    // size() bhi same kaam karta hai (alias of length)
    cout << "Using size(): " << s.size() << endl;      // Output: 6

    // Agar tum C-style string pointer le lo to null character bhi dekh sakte ho
    const char* c = s.c_str(); // gives C-style null-terminated string
    cout << "Character at index 6 (hidden null): " << (int)c[6] << endl; 
    // Output: 0 (ASCII of '\0')

    return 0;
}
