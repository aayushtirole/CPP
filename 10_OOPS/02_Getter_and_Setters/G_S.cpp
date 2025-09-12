#include <iostream>
using namespace std;

// Class definition
class Hero {
private:
    // properties (private for encapsulation)
    int health;
    char level;

public:
    // ---- Setter Functions ----
    void setHealth(int h) {
        health = h;
    }

    void setLevel(char l) {
        level = l;
    }

    // ---- Getter Functions ----
    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }
};

int main() {

    // creation of object 
    Hero h1;

    // Using setters to assign values
    h1.setHealth(70);
    h1.setLevel('A');

    // Using getters to access values
    cout << "Health is : " << h1.getHealth() << endl;
    cout << "Level is  : " << h1.getLevel() << endl;

    return 0;
}
