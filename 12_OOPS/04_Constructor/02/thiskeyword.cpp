#include<iostream>
#include<string>
using namespace std;
 
class teacher{

    // Access Modifiers 
    private:
    double salary;

    public:
    
    // properties or attributes 
    string name;
    string dept;
    string subject;

     // Parameterized constructor 
     
    teacher(string name, string dept, string Subject , double Salary){
        
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;  
    }





    // Methods or member function 
    void changedept(string newDept){
        dept = newDept;
    }

    void getInfo(){
        cout<< "Name:"<< name <<endl;
        cout<< "Department : " << dept <<endl;

    }


};

int main(){

    teacher t1("kaju", "Computer Science", "Java", 45000);
    t1.getInfo();
    
    return 0;
}