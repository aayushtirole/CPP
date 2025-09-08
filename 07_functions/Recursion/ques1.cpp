// print N to 1 

#include<iostream>
using namespace std;

void print(int n){

    if(n == 0) return; // base case
    cout<<n<<endl; // work 
    print(n-1); // Call
    // cout<<n<<endl; // baad main work se ye sequencewise printing krega (call ke baad work krna jisase chijje reserve ho jaye )
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    print(n);
}