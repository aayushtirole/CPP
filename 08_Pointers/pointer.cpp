#include <iostream>
using namespace std;

int main() {
    // Step 1: ek normal variable banate hain
    int a = 10;   // 'a' naam ka variable memory mein 10 store kar raha hai

    // Step 2: Pointer variable banate hain
    int *p = &a;  
    // yaha p ek pointer hai jo int type ka address store kar sakta hai
    // '&a' ka matlab hai "a ka address"
    // ab p ke andar a ka address rakha gaya hai

    // Step 3: Values aur addresses print karte hain
    cout << "a ki value: " << a << endl;       // direct value of 'a' (10)
    cout << "a ka address: " << &a << endl;   // 'a' ka memory address
    cout << "p ki value (address jo store hai): " << p << endl; // p ke andar 'a' ka address hoga
    cout << "p ka apna address: " << &p << endl;      // pointer variable 'p' ka bhi apna address hota hai
    cout << "Dereferencing *p: " << *p << endl;       // *p ka matlab: jo value us address pe rakhi hai (10)

    // Step 4: Pointer ke through value modify karte hain
    *p = 20;   // *p matlab 'a' ki value ko change karna -> ab 20 ho gayi
    cout << "a ki new value: " << a << endl; // ab a = 20 ho gaya

    // Step 5: ek aur variable aur pointer pointing
    int b = 30;
    p = &b;   // ab p ko b ka address de diya
    cout << "Ab p b ko point kar raha hai, *p = " << *p << endl; // ab 30 print karega

    return 0;
}
