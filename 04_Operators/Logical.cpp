#include <iostream>

using namespace std;

int main (){
    
    bool isStudent;
    int cups;
    cout << "Are you student (1 for yes or 0 for no )?";
    cin >> isStudent;

    cout << "how many cups you of tea have you purchased" ;
    cin >> cups;

    if(isStudent || cups > 15 ){
        cout <<"You are eligible for discount";

    }else{
        cout <<"You are not eligible for discount";

    }




    return 0;
}