#include<iostream>
#include<string>
using namespace std;
 
class teacher{

    // Access Modifiers 
    private:
    double Salary;

    public:
    // Non -  Parameterized constructor 
   
    teacher(){
        dept = "Computer Scinece";
        cout<< "Hi, I am constuctor\n";
    }


    // properties or attributes 
    string name;
    string dept;
    string subject;



    // Methods or member function 
    void changedept(string newDept){
        dept = newDept;
    }

    // setter -> private ki values ko set krna
    void setSalary(double s){
        Salary = s;
    } 

    // getter -> private ki value ko get krna means dena 
   double getSalary(){
        return Salary;
    } 


};

int main(){

    teacher t1;
    t1.name = "kaju";
    t1.subject = "java";
    t1.setSalary(45000);

    cout << "the name of the teacher is :"<< t1.name<<endl;
    cout << t1.getSalary()<< endl;
    cout << "Department :"<<t1.dept<<endl;

    
    return 0;
}