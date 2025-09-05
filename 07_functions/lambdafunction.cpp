// lambda function

// Syntax
// [capture_list](parameters) -> return_type {
//     // function body
// };

#include <iostream>

using namespace std;

int hellooChai(){
 return 10;
}

int main(){
    
    //lamda
    auto preparedChai = [](int cups){
        cout << "Preparing " << cups << " cups of tea" << endl;
    };

    preparedChai(4);
    
    return 0;
}