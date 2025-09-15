#include<iostream>
#include <string>
using namespace std;

class shape{
      virtual void draw() = 0;// Pure virtual function 
};

class circle : public shape{
    public:
        void draw (){
            cout <<"Drawing a circle\n";
        }
};

int main(){
    circle c1;
    c1.draw();

    return 0;
}