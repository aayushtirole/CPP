# Getter and Setter in C++

## 1. What are Getters and Setters?
- **Setter function** → Used to set (assign) a value to a private data member.
- **Getter function** → Used to get (return/read) the value of a private data member.
- Purpose → **Encapsulation** (hide data, control access).

---

## 2. Example Code with Explanation

```cpp
#include <iostream>
using namespace std;

class Hero {

private:
    int health;   // private property: cannot be accessed directly outside
    char level;   // private property: cannot be accessed directly outside

public:
    // --- Setter Functions ---

    // Function to set health
    // 'int h' is a parameter (local variable) which takes value from main()
    void setHealth(int h) {
        health = h;   // assigns local variable 'h' to data member 'health'
    }

    // Function to set level
    // 'char l' is a parameter (local variable)
    void setLevel(char l) {
        level = l;    // assigns local variable 'l' to data member 'level'
    }

    // --- Getter Functions ---

    // Function to get health
    int getHealth() {
        return health;   // returns the value stored in 'health'
    }

    // Function to get level
    char getLevel() {
        return level;    // returns the value stored in 'level'
    }
};

int main() {
    Hero h1;   // object creation

    // --- Using Setters (assign values) ---
    h1.setHealth(70);   // 70 is passed into parameter 'h'
    h1.setLevel('A');   // 'A' is passed into parameter 'l'

    // --- Using Getters (read values) ---
    cout << "Health is : " << h1.getHealth() << endl;
    cout << "Level is  : " << h1.getLevel() << endl;

    return 0;
}
