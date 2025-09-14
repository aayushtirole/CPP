#include<iostream>
using namespace std;

class student {
public:
    string name;
    double* cgpaPtr;

    // Constructor
    student(string name, double cgpa){
        this ->name = name;
        cgpaPtr = new double;   // new memory allocate ki
        *cgpaPtr = cgpa;
    }

    // ✅ Deep Copy Constructor
    student(student &obj){
        this->name = obj.name;
        
        // yaha pe deep copy ke liye nayi memory allocate ki gayi hai
        cgpaPtr = new double;

        // aur usme original object ki value copy ki gayi hai
        *cgpaPtr = *(obj.cgpaPtr);
    }

    void getinfo(){
        cout<< "Name:" << name <<endl;
        cout<< "cgpa:" << *cgpaPtr <<endl;
    }
};

int main(){
    student s1("aayush", 7.0);
    student s2(s1);   // copy constructor call hoga

    s1.getinfo();

    // ✅ s2 ke cgpaPtr me value change ki gayi
    // Deep copy hone ke wajah se yeh sirf s2 ki memory ko affect karega
    *(s2.cgpaPtr) = 9.2;   
    s1.getinfo();    // s1 ki value change nahi hogi

    s2.name = "piyush";  // ye sirf s2 ka name change karega
    s2.getinfo();

    return 0;
}
