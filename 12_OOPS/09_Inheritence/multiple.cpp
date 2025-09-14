#include<iostream>
using namespace std;

// Base Class 1
class person {
public:
    string name;
    int age;
};

// Base Class 2
class researcher {
public:
    string researchArea;
};

// Derived Class (inherits from both person and researcher)
class student : public person, public researcher {
public:
    int rollno;

   
};

int main() {
    student s1;
    s1.name = "Piyush";               // from person
    s1.age = 22;                      // from person
    s1.rollno = 101;                  // from student
    s1.researchArea = "Quantum Physics";  // from researcher

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Roll No: " << s1.rollno << endl;
    cout << "Research Area: " << s1.researchArea << endl;

  

    return 0;
}
