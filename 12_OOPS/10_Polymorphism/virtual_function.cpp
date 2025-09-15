// Run Time Polymorphism (Virtual Function )

#include<iostream>
#include <string>
using namespace std;

class Parent {
public:
    void getInfo(){
        cout <<"Parent Class\n";
     }

     virtual void hello(){
        cout << "hello from parent\n ";
     }
};

class child : public Parent {
public:
    void getInfo(){
        cout <<"Child Class\n";
     }

    void hello(){
        cout << "hello from child ";
    }
};

int main(){
    child c1;
    c1.hello();
    return 0;
}