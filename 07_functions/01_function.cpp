// Function ka basic syntax hota hai:
// returnType functionName(parameters){
//     // function body
// }
// Example: int add(int a, int b) { return a+b; }
// returnType = function kya return karega (int, void, etc.)

#include <iostream> // iostream header file input/output ke liye
using namespace std; // std:: likhne ki jagah directly cout, cin use kar sakte hain

// Function: checkTemperature
int checkTemperature(int temperature){  
    // Ye function ek integer parameter leta hai (temperature)
    // Aur wahi integer value ko return karta hai
    return temperature;
}

// function declaration (sirf bataya ki ye function exist karta hai)
// isse compiler ko pehle se pata chal jata hai ki aisa function hoga
void serveChai(int cups);

// Function: makeChai
void makeChai(){  
    // Ye function koi return value nahi deta (void)
    // sirf ek message print karta hai
    cout << "Boiling water, adding tea leaves, straining...";
}

// Function: serveChai with default parameter
void serveChai(string teaType = "Masala Tea"){  
    // Isme agar koi argument pass nahi karoge to "Masala Tea" by default use hoga
    int cups = 4; // locally defined variable
    cout << "Serving " << teaType << endl;
}

// Function: serveChai overloaded version
void serveChai(int cup, int tealeaves){  
    // Ye serveChai ka ek aur version hai (function overloading)
    // Parameters: cup aur tealeaves
    // Abhi iske andar kuch likha nahi gaya
}

// main function — program execution yahan se start hoti hai
int main(){
    int temp = checkTemperature(50); 
    // checkTemperature call kiya aur return value temp me store ki

    // cout << temp;  // agar ye line uncomment karoge to temp (50) print hoga
    // makeChai();   // function call karega jo chai banane ka process print karega
    // serveChai(3); // integer argument wala serveChai call hoga (cups version)

    serveChai();  
    // is call me koi argument pass nahi kiya, to default parameter wala version chalega
    // jo "Serving Masala Tea" print karega

    return 0; // Program successfully execute ho gaya
}

// Function definition: serveChai(int cups)
void serveChai(int cups){  
    // Ye wahi function hai jo pehle declare kiya tha
    // Ab iska pura body define kiya gaya hai
    cout << "Serving " << cups << " of chai";
}
