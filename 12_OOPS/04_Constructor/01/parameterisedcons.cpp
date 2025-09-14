#include <iostream>
using namespace std;

class Hero {
private:
    int health;
    char level;

public:
    // Parameterized Constructor
    Hero(int h, char l) {
        cout << "Parameterized Constructor called!" << endl;
        health = h;
        level = l;
    }

    void display() {
        cout << "Health: " << health << ", Level: " << level << endl;
    }
};

int main() {
    // Object creation with custom values
    Hero h1(150, 'B');  // Constructor takes 150 and 'B'
    h1.display();
    
    return 0;
}
