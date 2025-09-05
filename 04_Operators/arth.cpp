#include <iostream>
using namespace std;

int main (){
    int cups;
    double pricePerCup, totalPrice, discountPrice;
    
    cout << "Enter the number of tea cups:";
    cin >> cups;
    cout << "Enter the price per cups:";
    cin >> pricePerCup;
    
    totalPrice = cups * pricePerCup;
    
    //Apply 5% discount if total price is above 100
    
    if(totalPrice > 100){
        discountPrice = totalPrice - (totalPrice * 0.05);
        cout << "Discount price is:" << discountPrice << endl;
    } else {
        cout << "Total price is " << totalPrice << endl;
    }
    return 0;
}