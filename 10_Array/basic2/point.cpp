#include <iostream>
using namespace std;

// Pointer arithematic 
// address new = address current + i * size of data type 

int main (){
    int marks[4] = {23,45,56,89};

    int* p = marks;

    cout<<"The value of marks[0] is" << *p << endl;
    cout<<"The value of marks[1] is" << *(p+1) << endl;
    cout<<"The value of marks[2] is" << *(p+2 )<< endl;
    cout<<"The value of marks[3] is" << *(p+3 )<< endl;
    
    return 0;
}
