#include<iostream>
using namespace std;

class student {

public:
    string name;
    double* cgpaPtr;

    student(string name, double cgpa){
        this ->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // Destructor

    ~student(){
        cout<<"HI,i delete everything";
        delete cgpaPtr;

    }
    
    void getinfo(){
        cout<< "Name:" << name <<endl;
        cout<< "cgpa:" << *cgpaPtr <<endl;
    }
    


};

int main(){
    student s1("aayush", 7.0);
    s1.getinfo();

    return 0;
}
