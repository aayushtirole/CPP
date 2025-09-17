#include<iostream>
using namespace std;

int main(){
    
    int n;

    cout << "Enter the number :";
    cin >> n;
     
    if ( n%2 == 0){
        cout << "This is a even value";
    }else{
        cout << "This is a odd value";
    }

    return 0;
}