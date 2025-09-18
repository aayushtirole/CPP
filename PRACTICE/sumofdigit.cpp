#include<iostream>
using namespace std;

int main(){
    
    int n ,sum = 0;

    cout<<"Enter the value for your sum of digit:" << endl;
    cin >>n;

    for ( ; n >0 ; n=n/10){

        sum = sum + n%10;
    }

    cout<<"The sum of the digit : "<< sum <<endl;

    return 0;
}