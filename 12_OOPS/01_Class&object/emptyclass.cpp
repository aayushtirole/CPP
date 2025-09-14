// Empty Class

#include<iostream>
using namespace std;

// Class definition
class hero {
    // no data members, no functions -> completely empty class
};

int main() {

    // creation of object 
    hero h1;  
    // Even though 'hero' class is empty, we can still create an object.
    // Object banega, lekin uske andar koi data members nahi hain.

    cout << "size :" << sizeof(h1) << endl;  
    // sizeof(h1) will NOT be 0.
    // C++ standard ke according, empty class ka size at least 1 byte hota hai.
    // Reason: Har object ko unique memory address dena zaroori hai,
    // taaki do alag objects alag identify ho sakein.

    return 0;
}
