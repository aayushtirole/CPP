// call by reference

#include <iostream>
using namespace std;

// Step 1: Function definition (by reference)
// Yahaan x aur y original variables ke reference hai -> direct change hoga
void swapByReference(int &x, int &y) {
    // Step 5: Temporary variable t banega aur x ka value store karega
    int t = x;    
    // Step 6: x = y assign hoga
    x = y;        
    // Step 7: y = t assign hoga
    y = t;        
    // Function khatam -> changes original variables me reflect honge
}

int main() {
    // Step 2: Variables a aur b banenge
    int a = 10;    
    int b = 20;    

    // Step 3: Function call (original reference pass hote hain)
    swapByReference(a, b);  

    // Step 4: Original variables ab change ho chuke honge
    cout << "a = " << a << ", b = " << b << endl;

    return 0; // Program end
}
