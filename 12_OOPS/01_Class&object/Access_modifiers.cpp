// Access modifiers

#include<iostream>
using namespace std;

// Class definition
class hero {

public:   // Accessible from anywhere (inside or outside class)
    // properties
    int health;
    char level;   // ✅ ab public kar diya

private:  // Accessible ONLY inside the class (not from main or outside functions)
    // private function
    void print() {
        cout << level << endl;
    }
}; 

int main() {

    // creation of object 
    hero h1;  
    // 'h1' is an object of class 'hero'.
    // Object ke andar 'health' aur 'level' ke liye memory allocate hogi.

    h1.health = 70;   // ✅ Allowed (because 'health' is public)

    h1.level = 'A';   // ✅ ab allowed hai (public)

}
