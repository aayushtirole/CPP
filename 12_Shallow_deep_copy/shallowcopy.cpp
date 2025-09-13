#include <iostream>
#include <cstring>
using namespace std;

class Hero {
public:
    char *name;

    // Constructor
    Hero(const char *n) {
        name = new char[strlen(n) + 1]; // new memory allocate
        strcpy(name, n);
    }

    // ⚠️ No copy constructor written (compiler banayega shallow copy)

    void display() {
        cout << "Name: " << name << endl;
    }

    ~Hero() {
        cout << "Destructor called for: " << name << endl;
        delete[] name; // memory free
    }
};

int main() {
    Hero h1("Aayush");   // constructor -> allocates memory
    Hero h2 = h1;        // shallow copy -> h2.name points to SAME memory as h1.name

    h1.display();        // Aayush
    h2.display();        // Aayush

    // Program khatam hote waqt destructor dono objects ke liye chalega
    // ❌ Problem: same memory ko 2 baar delete karega (double free error)
    return 0;
}
