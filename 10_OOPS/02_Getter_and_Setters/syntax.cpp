#include <iostream>
using namespace std;

class Hero {

private:
    // --- Data Members (private) ---
    int health;   // property to store health value
    char level;   // property to store level value

public:
    // --- Setter Functions ---
    
    // Function to set health value
    // 'int h' is a parameter (local variable) that will receive a value from main()
    void setHealth(int h) {  
        health = h;  // assign the value of 'h' to data member 'health'
    }

    // Function to set level value
    // 'char l' is a parameter (local variable) for assigning character
    void setLevel(char l) {  
        level = l;  // assign the value of 'l' to data member 'level'
    }

    // --- Getter Functions ---
    
    // Function to get health value
    // return type is int because 'health' is an int
    int getHealth() {  
        return health;  // returns the value of 'health' to the caller
    }

    // Function to get level value
    // return type is char because 'level' is a char
    char getLevel() {  
        return level;  // returns the value of 'level' to the caller
    }
};

int main() {
    Hero h1;  // object creation

    // --- Using Setter Functions ---
    h1.setHealth(70);   // call setHealth(), here 70 goes into parameter 'h'
    h1.setLevel('A');   // call setLevel(), here 'A' goes into parameter 'l'

    // --- Using Getter Functions ---
    cout << "Health is : " << h1.getHealth() << endl; // getHealth() returns health value
    cout << "Level is  : " << h1.getLevel() << endl;  // getLevel() returns level value

    return 0;
}
