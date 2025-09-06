#include <iostream>
using namespace std;

// Step 1: Function declaration + definition
// Function "add" 2 integers lega aur unka sum return karega
int add(int a, int b) {   
    // Step 6: Jab ye line run hogi tab "a" aur "b" ke values use hongi
    return a + b; // Step 7: a+b calculate hoga aur result wapas bhej diya jayega
}

int main() {
    // Step 2: Variable x banega aur usme 2 assign hoga
    int x = 2;            

    // Step 3: Variable y banega aur usme 3 assign hoga
    int y = 3;            

    // Step 4: Function call hoga -> add(x,y)
    // Step 5: Function ke andar "a" = 2 aur "b" = 3 assign honge
    // Step 8: add function result (5) return karega aur wo "s" me store hoga
    int s = add(x, y);    

    // Step 9: "s" ki value (5) print hogi
    cout << s << endl;    

    // Step 10: Program successful exit (0 return)
    return 0;             
}
