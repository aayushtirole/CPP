#include <iostream>
#include <string>
using namespace std;

int main() {
    string teaorder;
    
    cout << "Enter your tea order: ";
    getline(cin, teaorder);   // reads entire line, including spaces
    
    if (teaorder == "Green Tea") {
        cout << "You have ordered Green Tea" << endl;
    } 
    return 0;
}
