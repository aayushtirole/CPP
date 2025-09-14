#include<iostream>
using namespace std;

// Base Class
class person {
public:
    string name;
    int age;
};

// Derived Class 1
class student : public person {
public:
    int rollno;
};

// Derived Class 2
class teacher : public person {
public:
    string subject;
};

int main() {
    // Student Object
    student s1;
    s1.name = "Aayush";
    s1.age = 21;
    s1.rollno = 101;

    cout << "Student Info:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Roll No: " << s1.rollno << endl;

    cout << "----------------" << endl;

    // Teacher Object
    teacher t1;
    t1.name = "Resham";
    t1.age = 35;
    t1.subject = "Physics";

    cout << "Teacher Info:" << endl;
    cout << "Name: " << t1.name << endl;
    cout << "Age: " << t1.age << endl;
    cout << "Subject: " << t1.subject << endl;


    return 0;
}
