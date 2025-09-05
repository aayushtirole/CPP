#include <iostream>

using namespace std;

int main(){

    int teaBeg;

    cout << "Enter a number of teaBeg you have:";
    cin >> teaBeg;

    if(teaBeg < 10){
        // teaBeg = teaBeg + 5;
        teaBeg += 5;
        
    } 
    cout << "your total bags are:" << teaBeg;

    return 0;
}