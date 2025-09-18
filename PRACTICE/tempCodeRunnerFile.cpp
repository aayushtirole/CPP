#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout << "Enter the number : " ;
    cin >> n;

    if (n%2 == 0){
        cout << "Nummber is a prime";
    }else{
        cout << "Nummber is a not prime";
    }
    return 0;
}