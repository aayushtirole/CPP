#include <iostream>
using namespace std;

// Class banayi
class Hero {
private:
    int health;   // property (private rakhi)

public:
    // 1. Parameterized constructor
    Hero(int h) {
        cout << "Parameterized constructor called!" << endl;
        health = h; // "this->health" bhi likh sakte hain
    }

    // 2. Copy constructor
    Hero(const Hero &obj) {
        cout << "Copy constructor called!" << endl;
        // 'obj' ke health ko copy karke new object ke health me dalna
        this->health = obj.health;
    }

    // 3. Display function (health print karne ke liye)
    void display() {
        cout << "Health: " << health << endl;
    }
};

int main() {
    // Step 1: Normal object create kiya parameterized constructor se
    Hero h1(100);   // h1 ke andar health = 100
    h1.display();   // Output: Health: 100

    cout << endl;

    // Step 2: Copy constructor se h2 banaya, h1 ko copy karke
    Hero h2(h1);    // yaha copy constructor call hoga
    h2.display();   // Output: Health: 100 (h1 ka copy)

    cout << endl;

    // Step 3: Ek aur object banaya direct assignment se
    Hero h3 = h1;   // yeh bhi copy constructor call karega
    h3.display();   // Output: Health: 100

    return 0;
}
