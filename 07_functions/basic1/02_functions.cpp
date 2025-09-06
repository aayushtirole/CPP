// pass by reference

#include <iostream>
using namespace std;

// Function definition
void pourChai(int cups){    
    // Yahan 'cups' ek NEW local variable hai (copy of main ka cups)
    cups = cups + 5;  // local variable update: 2 + 5 = 7
    cout << "Poured cups: " << cups << endl;  
    // prints: Poured cups: 7
    // ye sirf function ke andar ka cups hai
}

int main(){
    int cups = 2;   // Step 1: main ke andar ek local variable bana -> cups = 2

    pourChai(cups); // Step 2: function call hua
                    // main ka cups (2) COPY hoke function ke cups me gaya

    // Step 3: function se wapas aagaye, main ka cups abhi bhi 2 hi hai
    cout << "Total cups are " << cups << endl;
    // prints: Total cups are 2

    return 0;       // Program ends
}
