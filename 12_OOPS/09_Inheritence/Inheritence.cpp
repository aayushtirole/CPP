#include<iostream>
using namespace std;

class person{
public:
     string name;
     int age;    

     person(string name, int age){
        this->name = name;
        this->age = age;
     }

};

class student : public person {
public:
     int rollno;

     student(string name, int age, int rollno) : person( name,  age){
        this->rollno = rollno;
     }

     void getInfo(){
        cout << "name:" <<name <<endl;
        cout << "age:" <<age <<endl;
        cout << "roll no:" <<rollno <<endl;
        
     }
};

int main(){

    student s1("aayush", 22, 30);

    s1.getInfo();
    return 0;
}