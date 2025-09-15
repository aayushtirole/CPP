// Compile Time Polymorphism (Function Overloading)

#include<iostream>
#include <string>
using namespace std;

class print {
public:
     void show(int x){
        cout<<"int "<<x<<endl;
     }

     void show(char x){
        cout<<"char"<< x<<endl;
     }
};

int main(){

    print p1;
    p1.show('h');
    
    return 0;
}