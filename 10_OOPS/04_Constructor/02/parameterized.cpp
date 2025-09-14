#include<iostream>
#include<string>
using namespace std;
 
class teacher{

    // Access Modifiers 
    private:
    double Salary;

    public:
     // Parameterized constructor 
     
    teacher(string n, string d, string s , double sal){
        
        name = n;
        dept = d;
        Subject = s;
        Salary = sal;  
    }


    // properties or attributes 
    string name;
    string dept;
    string Subject;



    // Methods or member function 
    void changedept(string newDept){
        dept = newDept;
    }

    void getInfo(){
        cout<< "Name:"<< name <<endl;
        cout<< "Department :
        " << dept <<endl;

    }


};

int main(){

    teacher t1("kaju", "Computer Science", "Java", 45000);
    t1.getInfo();
    
    return 0;
}