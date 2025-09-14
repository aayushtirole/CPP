#include<iostream>
#include<string>
using namespace std;

int main(){
    // store a name =aayush

    // string str = "aayush";
    // cout<<str; 

    string s;
    cout << "Enter a string:";
    //cin>>s; //insme gap de denge input main toh sirf gap ke baad print nhi hoga or isko overcome krne ke liye getline ka use krte hain
    getline(cin,s);
    cout<<s;
return 0;
}