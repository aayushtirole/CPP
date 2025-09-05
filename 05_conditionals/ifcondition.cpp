#include<iostream>
#include <string>

using  namespace std;

int main (){

    string teaorder;
    
    cout << "Enter your tea order:";
    cin >> teaorder;
    
    if (teaorder == "Green Tea"){
    cout << "You have ordered Green Tea"<< endl;
    }
    return 0;
}