#include<iostream>
using namespace std;

int main(){
    
    int n, r, sum = 0, temp;

    cout << "Enter the number : ";
    cin >> n;   // 🔹 User se number input lena

    temp = n;   // 🔹 Original number ko temp me store karna (baad me compare karne ke liye)

    // 🔹 Loop jab tak number > 0 hai
    for ( ; n > 0; n = n / 10){
        r = n % 10;            // 🔹 Last digit nikalna (remainder se)
        sum = sum + (r * r * r); // 🔹 Us digit ka cube karke sum me add karna
        // Example: agar n=153 → pehle 3^3, fir 5^3, fir 1^3 add hoga
    }

    // 🔹 Compare karna: Agar digits ke cube ka sum original number ke barabar hai
    if (temp == sum){
        cout << "Number is an Armstrong Number";
    } else {
        cout << "Number is not an Armstrong Number";
    }

    return 0; // 🔹 Program successful end
}
