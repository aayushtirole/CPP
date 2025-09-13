#include <iostream>
using namespace std;

class Hero {
public:
    int health;                 // normal member
    static int timeToComplete;  // static member

    Hero(int h) {
        health = h;
    }

    // static function
    static void printTime() {
        cout << "Time to complete: " << timeToComplete << endl;

        // ❌ cout << health;   // Error: non-static members cannot be accessed
    }
};

// static member ko class ke bahar initialize karna zaroori hai
int Hero::timeToComplete = 10;

int main() {
    Hero h1(100);
    Hero h2(80);

    // Static function ko bina object banaye bhi call kar sakte ho
    Hero::printTime();

    // Object ke through bhi call kar sakte ho (not recommended)
    h1.printTime();
    h2.printTime();

    return 0;
}
