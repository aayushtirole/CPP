#include<iostream>
#include <string>
using namespace std;

// void fun(){
//     static int x = 0; // Intialization statement - 1 run

//     cout << "x : " << x << endl;
//     x++;
// };

class ABC {
public:
     ABC(){
        cout << "Constructor \n";
     }

     ~ABC(){
        cout << "Destructor \n";
     }
};

int main(){

    // fun();
    // fun();
    // fun();

    if (true) {
        static ABC obj;

    }
    
    cout << "End of the main function \n";
    return 0;
}