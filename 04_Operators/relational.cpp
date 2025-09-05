#include <iostream>

using namespace std;

int main (){

    int cups;

    cout << "Enter  your buying cups";
    cin >> cups;

    if (cups > 20){
         cout << "You will get the gold badge";


    }else if ( cups >= 10 && cups <= 20 ){
        cout << "You will get the silver badge";

    }else{
         cout << "You will do no get any badge";

}

    return 0;

}