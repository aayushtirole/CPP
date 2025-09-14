// Class and object 

#include<iostream>
using namespace std;

// Class definition
class hero {
    // properties 
    // By default, members are private if no access specifier is given.
    // Here 'health' is a data member of type int.
    int health;  
};

int main() {

    // creation of object 
    hero h1;  
    // Here 'h1' is an object of class 'hero'.
    // Memory will be allocated for the data members of the class.
    // In this case, 'health' is an int, so typically 4 bytes will be allocated (depends on system).

    cout << "size :" << sizeof(h1) << endl;  
    // sizeof(h1) will print the size of the object 'h1'.
    // Even though there is only one int (4 bytes), due to memory alignment/padding,
    // the actual size can be 4, 8, or more depending on the compiler/system.

    return 0;
}
