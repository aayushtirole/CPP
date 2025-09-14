#include <iostream>
using namespace std;

// Function: swap using pointers
void swapValues(int *x, int *y) {
    int temp = *x;   // *x = jo value x pointer point kar raha hai
    *x = *y;
    *y = temp;
}

int main() {
    // ================== BASIC POINTER ==================
    int a = 10;
    int *p = &a;   // p ke andar a ka address store hai

    cout << "a ki value: " << a << endl;
    cout << "a ka address (&a): " << &a << endl;
    cout << "p ke andar kya hai (address of a): " << p << endl;
    cout << "*p (dereference karke value): " << *p << endl;

    *p = 20;  // pointer ke through value change
    cout << "After *p = 20, a = " << a << endl << endl;

    // ================== POINTER TO POINTER ==================
    int **pp = &p; // pp ke andar p ka address hai
    cout << "pp (address of p): " << pp << endl;
    cout << "*pp (jo address p store kar raha tha): " << *pp << endl;
    cout << "**pp (actual value of a): " << **pp << endl << endl;

    // ================== ARRAY & POINTER ARITHMETIC ==================
    int arr[3] = {100, 200, 300};
    int *q = arr; // arr decays into &arr[0]

    cout << "Array using pointer arithmetic:" << endl;
    cout << "*q = " << *q << endl;       // arr[0]
    cout << "*(q+1) = " << *(q+1) << endl; // arr[1]
    cout << "*(q+2) = " << *(q+2) << endl; // arr[2]
    cout << endl;

    // ================== DYNAMIC MEMORY ==================
    int *dyn = new int(50);   // heap memory allocate kiya
    cout << "Dynamically allocated value: " << *dyn << endl;
    *dyn = 99;
    cout << "Modified dynamic value: " << *dyn << endl;
    delete dyn;  // free memory
    dyn = nullptr; // dangling pointer avoid karne ke liye
    cout << endl;

    // Array dynamic allocation
    int n = 3;
    int *dynArr = new int[n];
    for(int i=0; i<n; i++) dynArr[i] = (i+1)*10;
    cout << "Dynamic array values: ";
    for(int i=0; i<n; i++) cout << *(dynArr+i) << " ";
    cout << endl;
    delete[] dynArr; // free array memory
    dynArr = nullptr;
    cout << endl;

    // ================== CONST POINTERS ==================
    int x = 5, y = 15;
    const int *ptr1 = &x; // pointer to const int
    // *ptr1 = 20; ❌ error (value change nahi kar sakte)
    ptr1 = &y;  // ✔ pointer dusre variable ko point kar sakta hai

    int *const ptr2 = &x; // const pointer to int
    *ptr2 = 50;  // ✔ value change kar sakte ho
    // ptr2 = &y; ❌ pointer ko reseat nahi kar sakte

    cout << "const pointer example: x = " << x << ", y = " << y << endl << endl;

    // ================== FUNCTION WITH POINTER ==================
    int num1 = 10, num2 = 20;
    cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;
    swapValues(&num1, &num2); // address pass kiya
    cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
