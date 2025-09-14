#include<iostream>
using namespace std;

class person{
public:
     string name;
     int age;    
};

class student : public person {
public:
     int rollno;

};

class gradeStudent : public student{
public:
    string researchArea;

};

int main(){

    gradeStudent s1;
    s1.name="piyush";
    s1.researchArea="quantam physics";

    cout<<"name:"<< s1.name <<endl;
    cout<<"Reaserach Area:"<< s1.researchArea <<endl;
    return 0;
}