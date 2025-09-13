#include <iostream>
using namespace std;

class Hero {
public:
    int health;
    char level;

    // static data member
    static int timeToComplete;

    Hero(int h, char l) {
        health = h;
        level = l;
    }

    void display() {
        cout << "Health: " << health << ", Level: " << level 
             << ", Time: " << timeToComplete << endl;
    }
};

// static member ko class ke bahar initialize karna padta hai
int Hero::timeToComplete = 5;

int main() {
    Hero h1(100, 'A');
    Hero h2(80, 'B');

    h1.display();
    h2.display();

    cout << "\nChanging static member..." << endl;
    Hero::timeToComplete = 10;  // static ko class ke naam se access karte hain

    h1.display();
    h2.display(); // dono ke liye same change hoga

    return 0;
}
