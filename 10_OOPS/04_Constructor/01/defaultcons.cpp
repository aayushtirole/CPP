#include <iostream>
using namespace std;

class Hero {
private:
    int health;
    char level;

public:
    // Default Constructor
    Hero() {
        cout << "Default Constructor called!" << endl;
        health = 100;   // assigning default value
        level = 'A';    // assigning default value
    }

    void display() {
        cout << "Health: " << health << ", Level: " << level << endl;
    }
};

int main() {
    Hero h1;  // Object created -> default constructor will be called
    h1.display();

    return 0;
}
