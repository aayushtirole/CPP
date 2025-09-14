#include<iostream>
using namespace std;

// Base Class
class person {
public:
    string name;
    int age;
};

// student aur teacher dono "virtual" inherit kar rahe hain
class student : virtual public person {
public:
    int rollno;
};

class teacher : virtual public person {
public:
    string subject;
};

// TA inherits both student and teacher -> hybrid + diamond solved by virtual
class TA : public student, public teacher {
public:
    string responsibility;
};

int main() {
    TA ta1;

    // person (single copy because of virtual), student, teacher fields set kar rahe hain
    ta1.name = "Piyush";         // from person (single copy)
    ta1.age = 24;                // from person
    ta1.rollno = 202;            // from student
    ta1.subject = "Maths";       // from teacher
    ta1.responsibility = "Helps in labs";

    cout << "TA Info:" << endl;
    cout << "Name: " << ta1.name << endl;
    cout << "Age: " << ta1.age << endl;
    cout << "Roll No: " << ta1.rollno << endl;
    cout << "Subject: " << ta1.subject << endl;
    cout << "Responsibility: " << ta1.responsibility << endl;

    return 0;
}
