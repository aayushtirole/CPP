#include <iostream>
using namespace std;

// Class definition
class Hero {
private:
    int health;
    char level;

public:
    // ---- Setter Functions ----
    void setHealth(int h) { health = h; }
    void setLevel(char l) { level = l; }

    // ---- Getter Functions ----
    int getHealth() { return health; }
    char getLevel() { return level; }
};

int main() {
    // ----- Static Allocation -----
    Hero h1; // object created on stack (static)
    h1.setHealth(70);
    h1.setLevel('A');
    cout << "Static Allocation -> Health: " << h1.getHealth() << ", Level: " << h1.getLevel() << endl;

    // ----- Dynamic Allocation -----
    Hero* h2 = new Hero(); // object created on heap (dynamic)
    h2->setHealth(90);
    h2->setLevel('B');
    cout << "Dynamic Allocation -> Health: " << h2->getHealth() << ", Level: " << h2->getLevel() << endl;

    delete h2; // free memory

    return 0;
}
