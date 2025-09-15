// Run Time Polymorphism (Function Overriding)

#include<iostream>
#include <string>
using namespace std;

class Parent {
public:
    void getInfo(){
        cout <<"Parent Class\n";
     }
};

class child : public Parent {
public:
    void getInfo(){
        cout <<"Child Class\n";
     }
};

int main(){
    child c1;
    c1.getInfo();
    return 0;
}