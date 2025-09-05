#include <iostream>
using namespace std;

// Function jo chai ka total calculate karega
int totalChaiServed(int chai[], int size){
    // yaha 'chai' array ki copy nahi aayi, balki uske
    // pehle element ka pointer aaya hai (pass by reference like behaviour)

    int total = 0;  // total variable banaya jo sum store karega

    // Loop: 0 se size-1 tak chalega
    for(int i = 0 ; i < size ; i++){
        // har step pe array ka ek element total me add hoga
        total += chai[i];  
        // Example:
        // i=0 -> total = 0 + 50 = 50
        // i=1 -> total = 50 + 60 = 110
        // i=2 -> total = 110 + 55 = 165
        // ...
        // i=6 -> total = 380 + 75 = 455
    }

    return total;  // final total return karega (455)
}

int main(){
    // Array banaya jisme 7 din ki chai servings store hain
    int chaiServed[7] = {50, 60, 55, 70, 65, 80, 75};

    // Function call kiya, array aur size bheja
    // Important: array pura copy hoke nahi jaata, 
    // sirf uske starting address ko bheja jata hai
    int total = totalChaiServed(chaiServed, 7);

    // Function ne 455 return kiya, jo ab total variable me store ho gaya
    // Agar print karoge:
    // cout << "Total chai served: " << total;
    // Output: Total chai served: 455

    return 0; // program end
}
