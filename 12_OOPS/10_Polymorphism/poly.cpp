#include<iostream>
using namespace std;

class student {

public:
     string name;

     student(){
        cout<<"Non parameterized\n";
     }

     student(string name){
        this->name=name;

        cout << "Parameterized ";
     }
};


int main(){
    student s1("Tony");
    
    
    return 0;
}