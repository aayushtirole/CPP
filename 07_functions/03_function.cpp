// Pass by reference (int &cups)

#include <iostream>
using namespace std;

int globalChaiStock = 100;  
// Global variable: program ke har jagah accessible hai
// (but yaha use nahi hua, sirf example ke liye hai)

void pourChai(int &cups){  
    // '&' ka matlab hai: reference pass karna
    // Ab yeh function directly main() wale cups ko access karega
    int test = 9;  // local variable sirf yaha ke liye
    cups = cups + 5;  // ab ye main ka cups hi modify karega
    
    cout << "Poured cups: " << cups << endl;
    // is time main ka cups bhi change ho chuka hai
}

int main(){
    int cups = 2;              // Step 1: cups = 2
    pourChai(cups);            // Step 2: function call (reference pass)
    cout << "Total cups are " << cups << endl;  
    // Step 3: main ka cups ab 7 ban chuka hai
    return 0;
}
