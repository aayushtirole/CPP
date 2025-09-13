#include <iostream>
#include <cstring> // for strcpy
using namespace std;

class Hero {
public:
    char* name;   // dynamically allocated memory
    int health;

    // Constructor
    Hero(const char* n, int h) {
        name = new char[strlen(n) + 1]; // memory allocate karo
        strcpy(name, n);                // copy string into memory
        health = h;
    }

    // Deep Copy Constructor
    Hero(const Hero &obj) {
        cout << "Deep Copy Constructor called!" << endl;
        
        // naye memory allocate karo (same as original length)
        name = new char[strlen(obj.name) + 1];
        strcpy(name, obj.name);   // copy actual string content

        health = obj.health;      // copy health
    }

    void setName(const char* newName) {
        strcpy(name, newName); // overwrite existing memory
    }

    void display() {
        cout << "Name: " << name << ", Health: " << health << endl;
    }

    // Destructor (memory free karne ke liye)
    ~Hero() {
        delete[] name;
    }
};

int main() {
    Hero h1("Ironman", 100);  // constructor call
    Hero h2(h1);              // deep copy constructor call

    cout << "Before changing h1:" << endl;
    h1.display();
    h2.display();

    // h1 ka name change karte hain
    h1.setName("Batman");

    cout << "\nAfter changing h1:" << endl;
    h1.display();
    h2.display();  // h2 safe hai, kyunki deep copy hai

    return 0;
}
