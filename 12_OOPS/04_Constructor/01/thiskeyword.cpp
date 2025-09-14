#include <iostream>
using namespace std;

class Hero {
private:
    int health;   // class ka data member

public:
    // Parameterized constructor
    Hero(int health) {
        // Yahan constructor ka parameter bhi 'health' naam ka local variable hai.
        // Compiler ke andar har non-static member function ke saath ek hidden pointer aata hai: 'this'
        // 'this' ka type: Hero* (means pointer to the object being constructed)
        // this->health  -> object ke member variable ko refer karta hai
        // right-hand 'health' -> constructor ka parameter (local variable)
        this->health = health;  // member variable ko parameter value se assign kar diya
        // jab ye statement execute ho jata hai to jo object abhi ban raha hai uska 'health' member set ho jata hai
    }

    void display() {
        // display function bhi ek non-static member function hai, to yahan bhi 'this' available hai.
        // cout << this->health  -> current object ke health ko print karega
        cout << "Health: " << this->health << endl;
    }
};

int main() {
    // 1) Literal '100' evaluate hota hai (type int).
    // 2) Statement "Hero h1(100);" se:
    //    a) Stack (automatic storage) par 'h1' ke liye memory allocate hoti hai.
    //    b) Hero::Hero(int) constructor ko call kiya jata hai.
    //       Constructor ko do cheezein milti hain:
    //         - ek hidden pointer 'this' jo nayi allocated memory (h1) ko point karta hai
    //         - ek parameter value 100 (jo constructor ke 'health' parameter me aata hai)
    //    c) Constructor ke andar 'this->health = health;' execute hota hai:
    //         - left side: this->health => h1 ke member
    //         - right side: health => constructor parameter (100)
    //       Isse h1.health = 100 ho jata hai.
    //    d) Constructor finish hota hai aur control main() me wapas aata hai. Ab object h1 fully constructed hai.
    Hero h1(100);   // constructor called with health = 100

    // 3) h1.display() call:
    //    - Compiler internally call karta hai: Hero::display(&h1)
    //    - display() ke andar this pointer &h1 hota hai, to cout << this->health prints 100
    h1.display();   // prints "Health: 100"

    // 4) jab main() ka scope khatam hota hai (return 0 ya function end), 
    //    automatic object 'h1' destroy ho jayega aur (agar user-defined destructor hota to) destructor call hota.
    //    Yahan default destructor compiler provide karega (aur koi dynamic memory nahi hai to koi extra kaam nahi).
    return 0;
}
