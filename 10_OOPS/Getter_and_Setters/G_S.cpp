// Getters and setters 
#include<iostream>
using namespace std;

// Class definition
class hero {


    private:
    // properties
    int health;

    public:
    char level;  

    void print(){
        cout<<level<<endl;
    }

    int gethealth(){
        return health;
    }

    int getlevel(){
        return level;
    }

    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }
}; 

int main() {

    // creation of object 
    hero h1;  
    h1.health = 70;
    h1.level = 'A';

    cout << "health is  :" << h1.health << endl;  
    cout << "level is  :" << h1.level << endl;  


    return 0;
}

explain kro commnet main  