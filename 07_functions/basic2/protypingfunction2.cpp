#include <iostream>
using namespace std;

// Step 1: Prototype (function ka contract)
int add(int a, int b);   // yahan sirf declaration, body nahi hai

int main() {
    // Step 2: Compiler ko pata hai ki "add" function exist karta hai
    int result = add(2, 3);  
    cout << result; // Step 5: Output print karega
    return 0;
}

// Step 3: Actual definition neeche likhi hai
int add(int a, int b) {  
    // Step 4: Work perform karta hai
    return a + b;
}
